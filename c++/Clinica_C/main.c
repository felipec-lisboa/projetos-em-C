

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/* ---------- Limites gerais ---------- */
#define MAX_PACIENTES 20
#define MAX_MEDICOS   10
#define MAX_CONSULTAS 100

/* ---------- Estruturas ---------- */
typedef struct {
    int  id;
    char nome[50];
    int  idade;
    char cpf[15];
    char plano[30];
} Paciente;

typedef struct {
    int  id;
    char nome[50];
    char crm[15];
    char especialidade[30];
    char disp;               /* M = manhã | T = tarde */
} Medico;

typedef struct {
    int  id;
    int  idPaciente;
    int  idMedico;
    char dataHora[17];       /* "dd/mm/aaaa hh:mm"  + ‘\0’ */
} Consulta;

/* ---------- Vetores e contadores ---------- */
Paciente pacientes[MAX_PACIENTES];
Medico   medicos[MAX_MEDICOS];
Consulta consultas[MAX_CONSULTAS];
int qtPac = 0, qtMed = 0, qtCon = 0;

/* ---------- Prototipação ---------- */
void carregarDados();
void salvarDados();
void menu();
void cadastrarPaciente();
void cadastrarMedico();
void listarPacientes();
void listarMedicos();
void agendarConsulta();
void listarConsultasFiltradas();
void cancelarConsulta();
void ordenarConsultas();
void estatisticas();

/* ---------- Utilidades ---------- */
int buscaPacientePorId(int id);
int buscaMedicoPorId(int id);
bool cpfExiste(const char *cpf);
bool crmExiste(const char *crm);
int comparaData(const char *d1, const char *d2);   /* dd/mm/aaaa hh:mm */

/* ========================================================= */
int main(void)
{
    carregarDados();
    menu();
    salvarDados();
    return 0;
}

/* ---------------- Menus ---------------- */
void menu()
{
    int op;
    do {
        puts("\n==== SISTEMA CLINICA ====");
        puts("1  - Cadastrar paciente");
        puts("2  - Cadastrar medico");
        puts("3  - Listar pacientes");
        puts("4  - Listar medicos");
        puts("5  - Agendar consulta");
        puts("6  - Consultas por medico/paciente");
        puts("7  - Cancelar consulta");
        puts("8  - Ordenar consultas por data");
        puts("9  - Estatisticas");
        puts("0  - Sair");
        printf("Opcao: ");
        scanf("%d", &op); getchar();

        switch(op){
            case 1: cadastrarPaciente();        break;
            case 2: cadastrarMedico();          break;
            case 3: listarPacientes();          break;
            case 4: listarMedicos();            break;
            case 5: agendarConsulta();          break;
            case 6: listarConsultasFiltradas(); break;
            case 7: cancelarConsulta();         break;
            case 8: ordenarConsultas();         break;
            case 9: estatisticas();             break;
            case 0: puts("Saindo...");          break;
            default: puts("Opcao invalida!");
        }
    } while(op != 0);
}

/* ============== ETAPA 1 – Pacientes ============== */
void cadastrarPaciente()
{
    if(qtPac == MAX_PACIENTES){
        puts("Limite de pacientes atingido.");
        return;
    }
    Paciente p;
    p.id = qtPac + 1;
    printf("Nome: ");            fgets(p.nome,50,stdin);      p.nome[strcspn(p.nome,"\n")]=0;
    printf("Idade: ");           scanf("%d",&p.idade);        getchar();
    if(p.idade<=0){ puts("Idade invalida."); return; }
    printf("CPF: ");             fgets(p.cpf,15,stdin);       p.cpf[strcspn(p.cpf,"\n")]=0;
    if(cpfExiste(p.cpf)){ puts("CPF ja cadastrado."); return; }
    printf("Plano de saude: ");  fgets(p.plano,30,stdin);     p.plano[strcspn(p.plano,"\n")]=0;

    pacientes[qtPac++] = p;
    puts("Paciente cadastrado com sucesso!");
}

bool cpfExiste(const char *cpf)
{
    for(int i=0;i<qtPac;i++)
        if(strcmp(pacientes[i].cpf,cpf)==0) return true;
    return false;
}

/* ============== ETAPA 2 – Médicos ============== */
void cadastrarMedico()
{
    if(qtMed == MAX_MEDICOS){
        puts("Limite de medicos atingido.");
        return;
    }
    Medico m;
    m.id = qtMed + 1;
    printf("Nome: ");               fgets(m.nome,50,stdin);       m.nome[strcspn(m.nome,"\n")]=0;
    printf("CRM: ");                fgets(m.crm,15,stdin);        m.crm[strcspn(m.crm,"\n")]=0;
    if(crmExiste(m.crm)){ puts("CRM ja cadastrado."); return; }
    printf("Especialidade: ");      fgets(m.especialidade,30,stdin); m.especialidade[strcspn(m.especialidade,"\n")]=0;
    do{
        printf("Disponibilidade (M=manha | T=tarde): ");
        scanf(" %c",&m.disp); getchar();
        m.disp = toupper(m.disp);
    }while(m.disp!='M' && m.disp!='T');

    medicos[qtMed++] = m;
    puts("Medico cadastrado!");
}

bool crmExiste(const char *crm)
{
    for(int i=0;i<qtMed;i++)
        if(strcmp(medicos[i].crm,crm)==0) return true;
    return false;
}

/* ============== ETAPA 3 – Listagens ============== */
void listarPacientes()
{
    puts("\n--- Pacientes ---");
    for(int i=0;i<qtPac;i++)
        printf("%02d | %-30s | Idade:%3d | CPF:%s | Plano:%s\n",
               pacientes[i].id, pacientes[i].nome, pacientes[i].idade,
               pacientes[i].cpf, pacientes[i].plano);
    printf("Total: %d\n", qtPac);
}

void listarMedicos()
{
    puts("\n--- Medicos ---");
    for(int i=0;i<qtMed;i++)
        printf("%02d | %-30s | CRM:%s | Esp:%s | %s\n",
               medicos[i].id, medicos[i].nome, medicos[i].crm,
               medicos[i].especialidade,
               medicos[i].disp=='M'?"Manha":"Tarde");
    printf("Total: %d\n", qtMed);
}

/* ============== ETAPA 4 – Agendamento ============== */
void agendarConsulta()
{
    if(qtCon == MAX_CONSULTAS){
        puts("Limite de consultas atingido.");
        return;
    }
    Consulta c;
    c.id = qtCon + 1;
    printf("ID Paciente: ");  scanf("%d",&c.idPaciente); getchar();
    if(buscaPacientePorId(c.idPaciente)==-1){ puts("Paciente nao encontrado."); return; }
    printf("ID Medico: ");    scanf("%d",&c.idMedico); getchar();
    if(buscaMedicoPorId(c.idMedico)==-1){ puts("Medico nao encontrado."); return; }
    printf("Data e hora (dd/mm/aaaa hh:mm): ");
    fgets(c.dataHora,17,stdin);  c.dataHora[strcspn(c.dataHora,"\n")]=0;

    consultas[qtCon++] = c;
    puts("Consulta agendada!");
}

/* ============== ETAPA 5 – Filtrar Consultas ============== */
void listarConsultasFiltradas()
{
    int id, tipo;
    printf("Filtrar por (1) Medico ou (2) Paciente? ");
    scanf("%d",&tipo); getchar();
    printf("Informe o id: "); scanf("%d",&id); getchar();

    puts("\n--- Consultas ---");
    for(int i=0;i<qtCon;i++){
        if( (tipo==1 && consultas[i].idMedico==id) ||
            (tipo==2 && consultas[i].idPaciente==id) ){
            int idxOutro = (tipo==1) ? buscaPacientePorId(consultas[i].idPaciente)
                                      : buscaMedicoPorId(consultas[i].idMedico);
            printf("#%02d | %s | %s\n",
                   consultas[i].id,
                   consultas[i].dataHora,
                   (tipo==1)? pacientes[idxOutro].nome : medicos[idxOutro].nome);
        }
    }
}

/* ============== ETAPA 6 – Cancelamento ============== */
void cancelarConsulta()
{
    int id;
    printf("ID da consulta para cancelar: ");
    scanf("%d",&id); getchar();

    int pos = -1;
    for(int i=0;i<qtCon;i++)
        if(consultas[i].id == id){ pos = i; break; }

    if(pos==-1){ puts("Consulta nao encontrada."); return; }

    /* Remove e compacta o vetor */
    for(int i=pos;i<qtCon-1;i++)
        consultas[i] = consultas[i+1];
    qtCon--;
    puts("Consulta cancelada.");
}

/* ============== ETAPA 7 – Ordenação ============== */
void ordenarConsultas()
{
    puts("\nAntes da ordenacao:");
    for(int i=0;i<qtCon;i++)
        printf("%s\n", consultas[i].dataHora);

    /* insertion sort pela dataHora (string) */
    for(int i=1;i<qtCon;i++){
        Consulta key = consultas[i];
        int j = i-1;
        while(j>=0 && comparaData(consultas[j].dataHora,key.dataHora)>0){
            consultas[j+1] = consultas[j];
            j--;
        }
        consultas[j+1] = key;
    }

    puts("\nDepois da ordenacao:");
    for(int i=0;i<qtCon;i++)
        printf("%s\n", consultas[i].dataHora);
}

/* dd/mm/aaaa hh:mm  -> comparaçao lexicografica convertida para inteiro yyyymmddhhmm */
int comparaData(const char *d1, const char *d2)
{
    int dia,mes,ano,hora,minu;
    int v1, v2;
    sscanf(d1,"%d/%d/%d %d:%d",&dia,&mes,&ano,&hora,&minu);
    v1 = ano*1000000 + mes*10000 + dia*100 + hora*100 + minu;
    sscanf(d2,"%d/%d/%d %d:%d",&dia,&mes,&ano,&hora,&minu);
    v2 = ano*1000000 + mes*10000 + dia*100 + hora*100 + minu;
    return v1 - v2;
}

/* ============== ETAPA 8 – Arquivos ============== */
void salvarDados()
{
    FILE *fp;
    fp = fopen("pacientes.txt","w");
    for(int i=0;i<qtPac;i++)
        fprintf(fp,"%d;%s;%d;%s;%s\n", pacientes[i].id, pacientes[i].nome,
                pacientes[i].idade, pacientes[i].cpf, pacientes[i].plano);
    fclose(fp);

    fp = fopen("medicos.txt","w");
    for(int i=0;i<qtMed;i++)
        fprintf(fp,"%d;%s;%s;%s;%c\n", medicos[i].id, medicos[i].nome,
                medicos[i].crm, medicos[i].especialidade, medicos[i].disp);
    fclose(fp);

    fp = fopen("consultas.txt","w");
    for(int i=0;i<qtCon;i++)
        fprintf(fp,"%d;%d;%d;%s\n", consultas[i].id, consultas[i].idPaciente,
                consultas[i].idMedico, consultas[i].dataHora);
    fclose(fp);
}

void carregarDados()
{
    FILE *fp;
    /* Pacientes */
    if((fp=fopen("pacientes.txt","r"))){
        while(!feof(fp) && qtPac<MAX_PACIENTES){
            Paciente p;
            if(fscanf(fp,"%d;%49[^;];%d;%14[^;];%29[^\n]\n",
                      &p.id,p.nome,&p.idade,p.cpf,p.plano)==5)
                pacientes[qtPac++] = p;
        }
        fclose(fp);
    }
    /* Medicos */
    if((fp=fopen("medicos.txt","r"))){
        while(!feof(fp) && qtMed<MAX_MEDICOS){
            Medico m;
            if(fscanf(fp,"%d;%49[^;];%14[^;];%29[^;];%c\n",
                      &m.id,m.nome,m.crm,m.especialidade,&m.disp)==5)
                medicos[qtMed++] = m;
        }
        fclose(fp);
    }
    /* Consultas */
    if((fp=fopen("consultas.txt","r"))){
        while(!feof(fp) && qtCon<MAX_CONSULTAS){
            Consulta c;
            if(fscanf(fp,"%d;%d;%d;%16[^\n]\n",
                      &c.id,&c.idPaciente,&c.idMedico,c.dataHora)==4)
                consultas[qtCon++] = c;
        }
        fclose(fp);
    }
}

/* ============== ETAPA 9 – Estatísticas ============== */
void estatisticas()
{
    printf("\nPacientes: %d\nMedicos: %d\nConsultas: %d\n",
           qtPac, qtMed, qtCon);
    /* média de consultas por paciente */
    if(qtPac>0) printf("Media de consultas/paciente: %.2f\n",
                       (float)qtCon/qtPac);

    /* especialidade mais frequente */
    int contEsp[MAX_MEDICOS]={0};
    int max=0, idxMax=-1;
    for(int i=0;i<qtCon;i++){
        int idxM = buscaMedicoPorId(consultas[i].idMedico);
        contEsp[idxM]++;
        if(contEsp[idxM]>max){ max=contEsp[idxM]; idxMax=idxM; }
    }
    if(idxMax!=-1)
        printf("Especialidade mais utilizada: %s (%d consultas)\n",
               medicos[idxMax].especialidade, max);

    /* turno com maior volume */
    int manha=0, tarde=0;
    for(int i=0;i<qtCon;i++){
        int idxM = buscaMedicoPorId(consultas[i].idMedico);
        if(medicos[idxM].disp=='M') manha++; else tarde++;
    }
    printf("Turno com maior volume: %s\n",
           (manha>tarde)?"Manha": (tarde>manha)?"Tarde":"Empate");
}

/* ---------- Funções auxiliares ---------- */
int buscaPacientePorId(int id){
    for(int i=0;i<qtPac;i++) if(pacientes[i].id==id) return i;
    return -1;
}
int buscaMedicoPorId(int id){
    for(int i=0;i<qtMed;i++) if(medicos[i].id==id) return i;
    return -1;
}
