#include"Employee Management.h"
//������ʵ��
// 

 //���Ա��
void add_worker() {
    // ���Ա���Ƿ�����
    if (num_workers >= MAX_WORKERS) {
        printf("Ա���������޷������Ա��\n");
        return;
    }

    Employee new_worker = { 0 };
    printf("������������");
    scanf("%s", &new_worker.name);
    printf("�������Ա�");
    scanf("%s", &new_worker.gender);
    printf("�������䣺");
    scanf("%d", &new_worker.age);
    printf("�������ס��ַ��");
    scanf("%s", &new_worker.address);

    workers[num_workers++] = new_worker;

    printf("Ա����ӳɹ���\n");
}

//����Ա��
void search_worker() {
    char name[50];
    printf("������Ҫ����Ա����������");
    scanf("%s", name);

    int found = 0;
    for (int i = 0; i < num_workers; i++) {
        if (strcmp(name, workers[i].name) == 0) {
            printf("������%s\n", workers[i].name);
            printf("�Ա�%s\n", workers[i].gender);
            printf("���䣺%d\n", workers[i].age);
            printf("סַ��%s\n", workers[i].address);

            found = 1;
            break;
        }
    }
    if (!found) {
        printf("δ�ҵ�����Ա����\n");
    }
}

//�޸�Ա����Ϣ
void revise_worker() {
    char name[50];
    char newname[50];

    printf("������Ҫ�޸�Ա����������");
    scanf("%s", name);
    int found = 0;
    for (int i = 0; i < num_workers; i++) {
        if (strcmp(name, workers[i].name) == 0) {
            printf("������������");
            scanf("%s", &workers[i].name);
            printf("�������Ա�");
            scanf("%s", &workers[i].gender);
            printf("�������䣺");
            scanf("%d", &workers[i].age);
            printf("�������ס��ַ��");
            scanf("%s", &workers[i].address);
            printf("Ա���޸ĳɹ���\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("δ�ҵ�����Ա����\n");
    }
}

//��ʾ����Ա��
void display_all_worker()
{
    int i = 0;
    if (num_workers != 0)
    {
        printf("����Ա�����£�\n");
        for ( i = 0; i < num_workers; i++)
        {
            printf("id:%d \n����: %s \n�Ա�: %s  \n����: %d \nסַ: %s\n", i + 1, workers[i].name, workers[i].gender, workers[i].age, workers[i].address);
        }

    }
    else
    {
        printf("��û�����Ա����ϢŶ����\n");
        
    }
    
   
}



 
   
