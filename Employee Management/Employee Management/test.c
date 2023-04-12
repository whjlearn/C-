void menu()
{
	printf("***************************\n");
	printf("          主菜单           \n");
	printf("***************************\n");
	printf("        1 :添加员工        \n");
	printf("        2 :查找员工        \n");
	printf("        3 :修改员工信息    \n");
	printf("        4 :显示所有员工信息\n");
	printf("        0 :退出           \n");
	printf("***************************\n");
}

int main()
{
	int input;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch(input)
		{
		case 0:
			printf("退出系统");
			break;
		case 1:
			printf("添加员工\n");
			add_worker();
			break;

		case 2:
			printf("查找员工\n");
			search_worker();
			break;

		case 3:
			printf("修改员工信息\n");
			revise_worker();
			break;

		case 4:
			display_all_worker();
			break;

		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		
	} while (input);
	return 0;
}