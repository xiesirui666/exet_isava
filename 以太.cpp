/*��ɫ����:
0 = ��ɫ 8 = ��ɫ
1 = ��ɫ 9 = ����ɫ
2 = ��ɫ 10 = ����ɫ
3 = ǳ��ɫ 11 = ��ǳ��ɫ
4 = ��ɫ 12 = ����ɫ
5 = ��ɫ 13 = ����ɫ
6 = ��ɫ 14 = ����ɫ
7 = ��ɫ 15 = ����ɫ
*/
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
class me {
	public:
		long long zhanli = 100;
		long long hp = 200;
		long long max_hp = 200;
		long long fangyuli = 10;
		long long tianshu = 1;
		long long jifen = 0;
		long long jingyan = 0;
		long long linhun = 0;
		long long muofa = 100;
		long long max_muofa = 100;
		struct jineng {
			string s1;
			int s2;
		};
		vector<jineng> ji;
		struct moyao {
			string s3;
			int s4;
		};
		vector<moyao> mo;
		void moyaoshuchu();
		jinengpanduan();
		string mofashi[5] = {"", "Сħ��ʦ", "ħ��ʦ", "��ħ��ʦ", "����ħ��ʦ"};
		int jingjie = 1;
		string duihuanma = " #daodle#_111000__# ";
};
class me2 {
	public:
		bool flag=0;
		long long zhanli = 100;
		long long hp = 200;
		long long max_hp = 200;
		long long fangyuli = 10;
		long long jinbi = 10;
		long long tianshu = 1;
		long long jifen = 0;
		long long jingyan = 0;
		struct jineng {
			string s1;
			int s2;
		};
		vector<jineng> ji;
		struct moyao {
			string s3;
			int s4;
		};
		vector<moyao> mo;
		void moyaoshuchu();
		jinengpanduan();
		string mofashi[5] = {"", "Сħ��ʦ", "ħ��ʦ", "��ħ��ʦ", "����ħ��ʦ"};
		int jingjie = 1;
} wo2;
void COLOR_PRINT2(const char* s, int front_color, int back_color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color * 16 | FOREGROUND_INTENSITY | front_color);
	printf(s);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
me wo;
void _1();
void _2();
void _3();
void _4();
void _5();
void _6();
void _7();
void _8();
void _9();
void _10();
void _11();
void _12();
void _13();
void pr(string s, string s1, int s2) {
	cout << s;
	for (int i = 0; i < int(s1.size()); i++) {
		cout << s1[i];
		Sleep(s2);
	}
	return ;
}
int main() {
	pr("", "����ϷΪľ�̹����ҳ�Ʒ,��ַ:https://www.luogu.com.cn/team/43631,F���鿴 N���˳�", 10);
	cout << endl;
	char jiaru;
	cin>>jiaru;
	if (jiaru == 'F')
		system("start https://www.luogu.com.cn/team/43631");
	system("pause");
	system("cls");
	pr("", "�Ƿ�����ǰ��?(T or F [��д])", 10);
	cout << endl;
	char shifou;
	cin >> shifou;
	system("cls");
	if (shifou == 'T')
		goto DD;
	COLOR_PRINT2("��̫��½", 4, 0);
	pr("", ",һ������Ĵ�½", 150);
	cout << endl;
	pr("", "�㡪��һ��ħ��ѧͽ,������֮ǰ�����˵�һ������", 100);
	cout << endl;
	system("pause");
	pr("����˵:", "hi", 50);
	pr("", "����,�Ҵ���ǧ�����ħ��ѧͽ�п����㡣�Ӵ�,������ҵ�ͽ����", 50);
	cout << endl;
	system("pause");
	system("cls");
DD:
	while (1) {
		cout << "���ǵ�" << wo.tianshu << "�� ����" << wo.mofashi[wo.jingjie] << endl;
		cout << "1.ս�� 2.ħҩ(δ����) 3.��ҩ(δ����) 4.�̳� 5.����(δ����) 6.ڤ��";
		cout << " 7.������־ 8.��ǰ�汾 9.�һ��� 10.����ľ�̹����� 11.��Ϣ 12.���� 13.����\n";
		cout << "ս����:" << wo.zhanli << endl;
		cout << "HP:" << wo.hp << " MAX_HP:" << wo.max_hp << endl;
		cout << "������:" << wo.fangyuli << endl;
		cout << "���:" << wo.linhun<<endl;
		if(wo.tianshu==500) {
			cout<<"���ǵ������,���ֵ�ʦ������һ��Ӣ�ۡ���Mr.��Ϧ\n";
			cout<<"��ϲ��ɹ�����ڶ�Ӣ��\n";
			wo2.flag=1;
			system("pause");
		}
		int xuanze;
		cin>>xuanze;
		switch (xuanze) {
			case 1: {
				_1();
				break;
			}
			case 2: {
				_2();
				break;
			}
			case 3: {
				_3();
				break;
			}
			case 4: {
				_4();
				break;
			}
			case 5: {
				_5();
				break;
			}
			case 6: {
				_6();
				break;
			}
			case 7: {
				_7();
				break;
			}
			case 8: {
				_8();
				break;
			}
			case 9: {
				_9();
				break;
			}
			case 10: {
				_10();
				break;
			}
			case 11: {
				_11();
				break;
			}
			case 12: {
				_12();
				break;
			}
			case 13: {
				_13();
				break;
			}
			default: {
				break;
			}
		}
		if (wo.hp <= 0) return 0;
		srand(time(NULL));
		wo.tianshu += rand() % 2 ;
		system("cls");
	}
}

string xiaoguai[5] = {"С����", "Сѩ��", "С�ҹ�", "С���", "С����"};
int xiaoguaixingxi[5][2] = {{150, 50}, {130, 80}, {210, 70}, {110, 100}, {90, 100}};
string boss[5] = {"��ħ��", "ˮħ��", "��ħ��", "ľħ��", "��ħ��"};
int bossxingxi[5][2] = {{10000, 1}, {12345, 1}, {585, 1112}, {777, 1013}, {101, 1995}};
string shidaimingwang[10] = {"�ع���", "������", "�ε���", "������", "������", "ƽ����", "̩ɽ��", "������", "�����", "ת����"};
int shidaimingwangxingxi[10][2] = {{4000, 500}, {800, 1050}, {9000, 100}, {15800, 70}, {99999, 10}, {1000, 1000}, {8888, 333}, {9852, 258}, {1050, 2010}, {99999, 99999}};
void _1() {
	cout << "1.С�� 2.����֮�� 3.��ħ�� 4.��������� 5.ʮ��ڤ��\n";
	int xuanze;
	cin >> xuanze;
	switch (xuanze) {
		case 1: {
			srand(time(NULL));
			int xiao = rand() % 5;
			cout << "��������" << xiaoguai[xiao] << endl;
			int g = xiaoguaixingxi[xiao][1];
			int h = xiaoguaixingxi[xiao][0];
			cout << "������:" << g << endl << "����ֵ:" << h << endl;
			g = g - wo.fangyuli;
			if (g < 0) g = 0;
			while (1) {
				cout << "�㹥��" << endl;
				srand(time(NULL));
				int shan_bao = rand();
				if (shan_bao % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
				} else if (shan_bao % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
					int b = wo.zhanli * 2;
					h -= b;
					cout << xiaoguai[xiao] << "��Ѫ" << b << "��" << endl << "��ʣ" << h << "��" << endl;
				} else {
					h = h - wo.zhanli;
					cout << xiaoguai[xiao] << "��Ѫ" << wo.zhanli << "��" << endl << "��ʣ" << h << "��" << endl;
				}
				if (h <= 0) {
					cout << "win!" << endl;
					wo.linhun+=100;
					system("pause");
					break;
				}
				system("pause");
				cout << "�Է�����" << endl;
				srand(time(NULL));
				int bao_shan = rand();
				if (bao_shan % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
				} else if (bao_shan % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
					int b = g * 2;
					wo.hp -= b;
					cout << "YOU ��Ѫ" << b << "��" << endl << "��ʣ" << wo.hp << "��" << endl;
				} else {
					wo.hp -= g;
					cout << "YOU ��Ѫ" << g << "��" << endl << "��ʣ" << wo.hp << "��" << endl;
				}
				if (wo.hp <= 0) {
					pr("", "game__over!!!", 500);
					wo.hp = 10;
					break;
				}
			}
			system("pause");
			break;
		}
		case 2: {
			srand(time(NULL));
			int xiao = rand() % 5;
			cout << "��������" << boss[xiao] << endl;
			int g = bossxingxi[xiao][1];
			int h = bossxingxi[xiao][0];
			cout << "������:" << g << endl << "����ֵ:" << h << endl;
			g = g - wo.fangyuli;
			if (g < 0) g = 0;
			while (1) {
				cout << "�㹥��" << endl;
				srand(time(NULL));
				int shan_bao = rand();
				if (shan_bao % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
				} else if (shan_bao % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
					int b = wo.zhanli * 2;
					h -= b;
					cout << xiaoguai[xiao] << "��Ѫ" << b << "��" << endl << "��ʣ" << h << "��" << endl;
				} else {
					h = h - wo.zhanli;
					cout << xiaoguai[xiao] << "��Ѫ" << wo.zhanli << "��" << endl << "��ʣ" << h << "��" << endl;
				}
				if (h <= 0) {
					cout << "win!" << endl;
					system("pause");
					break;
				}
				system("pause");
				cout << "�Է�����" << endl;
				srand(time(NULL));
				int bao_shan = rand();
				if (bao_shan % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
				} else if (bao_shan % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
					int b = g * 2;
					wo.hp -= b;
					cout << "YOU ��Ѫ" << b << "��" << endl << "��ʣ" << wo.hp << "��" << endl;
				} else {
					wo.hp -= g;
					cout << "YOU ��Ѫ" << g << "��" << endl << "��ʣ" << wo.hp << "��" << endl;
				}
				if (wo.hp <= 0) {
					pr("", "game__over!!!", 500);
					wo.hp = 10;
					break;
				}
			}
			system("pause");
			break;
		}
		case 3: {
			cout << "���ڿ���\n";
			system("pause");
			break;
		}
		case 4: {
			cout << "���ڿ���\n";
			system("pause");
			break;
		}
		case 5: {
			srand(time(NULL));
			int shi = rand() % 5;
			cout << "��������" << shidaimingwang[shi] << endl;
			int g = shidaimingwangxingxi[shi][1];
			int h = shidaimingwangxingxi[shi][0];
			cout << "������:" << g << endl << "����ֵ:" << h << endl;
			g = g - wo.fangyuli;
			if (g < 0) g = 0;
			while (1) {
				cout << "�㹥��" << endl;
				srand(time(NULL));
				int shan_bao = rand();
				if (shan_bao % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
				} else if (shan_bao % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
					int b = wo.zhanli * 2;
					h -= b;
					cout << shidaimingwang[shi] << "��Ѫ" << b << "��" << endl << "��ʣ" << h << "��" << endl;
				} else {
					h = h - wo.zhanli;
					cout << shidaimingwang[shi] << "��Ѫ" << wo.zhanli << "��" << endl << "��ʣ" << h << "��" << endl;
				}
				if (h <= 0) {
					cout << "win!" << endl;
					system("pause");
					break;
				}
				system("pause");
				cout << "�Է�����" << endl;
				srand(time(NULL));
				int bao_shan = rand();
				if (bao_shan % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
				} else if (bao_shan % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--����!", 0, 15);
					int b = g * 2;
					wo.hp -= b;
					cout << "YOU ��Ѫ" << b << "��" << endl << "��ʣ" << wo.hp << "��" << endl;
				} else {
					wo.hp -= g;
					cout << "YOU ��Ѫ" << g << "��" << endl << "��ʣ" << wo.hp << "��" << endl;
				}
				if (wo.hp <= 0) {
					pr("", "game__over!!!", 500);
					break;
				}
			}
			system("pause");
			break;
			break;
		}
		default: {
			cout << "���ڿ���\n";
			system("pause");
			break;
		}
	}
}
void _2() {
}
void _3() {
}
void _4() {
	cout << "����Ų�ѯ  0.�˳�" << endl;
	cout<<" __________________________________________________________________________"<<endl;
	cout<<"|1. �Ҵ���װ   10000���                                                   |\n";
	cout<<"|2. ��ɷ��װ   20000���                                                   |\n";
	cout<<"|3. ������װ   35000���                                                   |\n";
	cout<<"|";
	COLOR_PRINT2("4. �����װ   50000���                                                   ",5,15);
	cout<<"|\n";
	cout<<"|";
	COLOR_PRINT2("5. ��˪��װ   100000���                                                  ",5,15);
	cout<<"|\n";
	cout<<"|";
	COLOR_PRINT2("   ����ʯ     10000���                                                   ",6,0);
	cout<<"|\n";
	cout<<"|                                                                          |\n";
	cout<<"|                                                                          |\n";
	cout<<"|                                                                          |\n";
	cout<<"|                                                                          |\n";
	cout<<"|__________________________________________________________________________|\n";
	int i;
	cin>>i;
	if(i==1) {
		if(wo.linhun<10000) {
			pr("","������ȥ���",30);
			system("pause");
		} else {
			pr("","����ɹ�!",30);
			wo.zhanli+=10;
			wo.max_hp+=30;
			wo.hp=wo.max_hp;
			wo.fangyuli+=5;
		}
	} else if(i==2) {
		if(wo.linhun<10000) {
			pr("","������ȥ���",30);
			system("pause");
		} else {
			pr("","����ɹ�!",30);
			wo.zhanli+=10;
			wo.max_hp+=30;
			wo.hp=wo.max_hp;
			wo.fangyuli+=5;
		}
	}
	system("pause");
}
void _5() {
}
void _6() {
	cout << "ս����+10" << endl;
	wo.zhanli += 10;
	system("pause");
}
void _7() {
	cout << "2022.4.13 ��Ϸ����̫��������!        0.1��,�ڲ�\n";
	system("pause");
	cout << "2022.4.14 ������\n";
	system("pause");
	cout << "2022.4.15 ���ӻ�����������~~           0.2��,�ڲ�\n";
	system("pause");
	cout << "2022.4.16 ������\"ս��(������\"���� ����\" ������\"ʮ��ڤ��\")\"������\"����,��Ϣ\"����~~       0.3��,�ڲ�\n";
	system("pause");
	cout << "2022.4.17 ������\"����--����ʥ�� ս��--����֮��\"\n";
	system("pause");
	return ;
}
void _8() {
	pr("��ǰ�汾", "0.3", 1000);
	return ;
}
void _9() {
	string duihuan;
	cin >> duihuan;
	duihuan = ' ' + duihuan + ' ';
	if (wo.duihuanma.find(duihuan) != string::npos) {
		cout << "�һ��ɹ�" << endl;
		wo.linhun+=100000;
		system("pause");
		return;
	}
	cout << "�һ�ʧ��" << endl;
	system("pause");
	return ;
}
void _10() {
	system("start https://www.luogu.com.cn/team/43631");
	return ;
}
void _11() {
	cout << "��Ϣ�ɹ�! hp+10";
	wo.hp += 10;
	if (wo.hp > wo.max_hp) wo.hp = wo.max_hp;
	system("pause");
}
void _12() {
	cout << "����Ų�ѯ  0.�˳�" << endl;
	cout << "____________________________" << endl;
	cout << "|1. ����ʥ��               |" << endl;
	cout << "|                          |" << endl;
	cout << "|2. ��ɷ��«               |" << endl;
	cout << "|                          |" << endl;
	cout << "|3. ����ƿ               |" << endl;
	cout << "|                          |" << endl;
	cout << "|4. ��Ž�               |" << endl;
	cout << "|                          |" << endl;
	cout << "|5. ��˪��                 |" << endl;
	cout << "|                          |" << endl;
	cout << "|6. ��ɲ����               |" << endl;
	cout << "|                          |" << endl;
	cout << "|7. ڤ�繳צ               |" << endl;
	cout << "|                          |" << endl;
	cout << "|__________________________|" << endl;
	int n;
	cin >> n;
	switch (n) {
		case 1: {
			cout << "����ʥ�� :\n";
			cout << "����: 0\n";
			cout << "����: 0\n";
			cout << "�ٶ�: 0\n";
			cout << "����: 0\n";
			cout << "����: ��������ֵ\n";
			system("pause");
			break;
		}
		case 2: {
			cout << "��ɷ��« :\n";
			cout << "����: 0\n";
			cout << "����: 0\n";
			cout << "�ٶ�: 0\n";
			cout << "����: 0\n";
			cout << "���Է�HP<2�����MAX_HP ������ƨ\n ���������1.25��\n";
			system("pause");
			break;
		}
		case 3: {
			cout << "����ƿ :\n";
			cout << "����: 0\n";
			cout << "����: 0\n";
			cout << "�ٶ�: 0\n";
			cout << "����: 0\n";
			cout << "�ָ�ħ��ֵ\n";
			system("pause");
			break;
		}
		case 4: {
			cout << "δ����" << endl;
			system("pause");
			break;
		}
		case 5: {
			cout << "δ����" << endl;
			system("pause");
			break;
		}
		case 6: {
			cout << "δ����" << endl;
			system("pause");
			break;
		}
		case 7: {
			cout << "δ����" << endl;
			system("pause");
			break;
		}
	}
}
void _13()
{
	cout<<"��ǰ��ļ���:";
	for(int i=0;i<wo.ji.size();i++){
		cout<<wo.ji[i].s1<<":"<<wo.ji[i].s2<<endl;
	}
}
