void menu()
{
	printf("***************************\n");
	printf("          ���˵�           \n");
	printf("***************************\n");
	printf("        1 :���Ա��        \n");
	printf("        2 :����Ա��        \n");
	printf("        3 :�޸�Ա����Ϣ    \n");
	printf("        4 :��ʾ����Ա����Ϣ\n");
	printf("        0 :�˳�           \n");
	printf("***************************\n");
}

int main()
{
	int input;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
		case 0:
			printf("�˳�ϵͳ");
			break;
		case 1:
			printf("���Ա��\n");
			add_worker();
			break;

		case 2:
			printf("����Ա��\n");
			search_worker();
			break;

		case 3:
			printf("�޸�Ա����Ϣ\n");
			revise_worker();
			break;

		case 4:
			display_all_worker();
			break;

		default:
			printf("�����������������\n");
			break;
		}
		
	} while (input);
	return 0;
}