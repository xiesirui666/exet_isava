/*颜色代号:
0 = 黑色 8 = 灰色
1 = 蓝色 9 = 淡蓝色
2 = 绿色 10 = 淡绿色
3 = 浅绿色 11 = 淡浅绿色
4 = 红色 12 = 淡红色
5 = 紫色 13 = 淡紫色
6 = 黄色 14 = 淡黄色
7 = 白色 15 = 亮白色
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
		string mofashi[5] = {"", "小魔法师", "魔法师", "大魔法师", "传奇魔法师"};
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
		string mofashi[5] = {"", "小魔法师", "魔法师", "大魔法师", "传奇魔法师"};
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
	pr("", "此游戏为木禾工作室出品,网址:https://www.luogu.com.cn/team/43631,F键查看 N键退出", 10);
	cout << endl;
	char jiaru;
	cin>>jiaru;
	if (jiaru == 'F')
		system("start https://www.luogu.com.cn/team/43631");
	system("pause");
	system("cls");
	pr("", "是否跳过前奏?(T or F [大写])", 10);
	cout << endl;
	char shifou;
	cin >> shifou;
	system("cls");
	if (shifou == 'T')
		goto DD;
	COLOR_PRINT2("以太大陆", 4, 0);
	pr("", ",一个神奇的大陆", 150);
	cout << endl;
	pr("", "你——一个魔法学徒,在三天之前练成了第一道法纹", 100);
	cout << endl;
	system("pause");
	pr("格林说:", "hi", 50);
	pr("", "今天,我从三千万贵族魔法学徒中看中你。从此,你就是我的徒弟了", 50);
	cout << endl;
	system("pause");
	system("cls");
DD:
	while (1) {
		cout << "这是第" << wo.tianshu << "天 你是" << wo.mofashi[wo.jingjie] << endl;
		cout << "1.战斗 2.魔药(未开发) 3.制药(未开发) 4.商城 5.进阶(未开发) 6.冥想";
		cout << " 7.更新日志 8.当前版本 9.兑换码 10.加入木禾工作室 11.休息 12.法宝 13.技能\n";
		cout << "战斗力:" << wo.zhanli << endl;
		cout << "HP:" << wo.hp << " MAX_HP:" << wo.max_hp << endl;
		cout << "防御力:" << wo.fangyuli << endl;
		cout << "灵魂:" << wo.linhun<<endl;
		if(wo.tianshu==500) {
			cout<<"这是第五百天,格林导师送了你一个英雄——Mr.白夕\n";
			cout<<"恭喜你成功激活第二英雄\n";
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

string xiaoguai[5] = {"小海怪", "小雪怪", "小岩怪", "小火怪", "小冰怪"};
int xiaoguaixingxi[5][2] = {{150, 50}, {130, 80}, {210, 70}, {110, 100}, {90, 100}};
string boss[5] = {"土魔王", "水魔王", "火魔王", "木魔王", "金魔王"};
int bossxingxi[5][2] = {{10000, 1}, {12345, 1}, {585, 1112}, {777, 1013}, {101, 1995}};
string shidaimingwang[10] = {"秦广王", "楚江王", "宋帝王", "仵官王", "阎罗王", "平等王", "泰山王", "都市王", "卞城王", "转轮王"};
int shidaimingwangxingxi[10][2] = {{4000, 500}, {800, 1050}, {9000, 100}, {15800, 70}, {99999, 10}, {1000, 1000}, {8888, 333}, {9852, 258}, {1050, 2010}, {99999, 99999}};
void _1() {
	cout << "1.小怪 2.五行之王 3.七魔王 4.传奇进阶王 5.十代冥王\n";
	int xuanze;
	cin >> xuanze;
	switch (xuanze) {
		case 1: {
			srand(time(NULL));
			int xiao = rand() % 5;
			cout << "你遇到了" << xiaoguai[xiao] << endl;
			int g = xiaoguaixingxi[xiao][1];
			int h = xiaoguaixingxi[xiao][0];
			cout << "攻击力:" << g << endl << "生命值:" << h << endl;
			g = g - wo.fangyuli;
			if (g < 0) g = 0;
			while (1) {
				cout << "你攻击" << endl;
				srand(time(NULL));
				int shan_bao = rand();
				if (shan_bao % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--闪现!", 0, 15);
				} else if (shan_bao % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--暴击!", 0, 15);
					int b = wo.zhanli * 2;
					h -= b;
					cout << xiaoguai[xiao] << "减血" << b << "滴" << endl << "还剩" << h << "滴" << endl;
				} else {
					h = h - wo.zhanli;
					cout << xiaoguai[xiao] << "减血" << wo.zhanli << "滴" << endl << "还剩" << h << "滴" << endl;
				}
				if (h <= 0) {
					cout << "win!" << endl;
					wo.linhun+=100;
					system("pause");
					break;
				}
				system("pause");
				cout << "对方攻击" << endl;
				srand(time(NULL));
				int bao_shan = rand();
				if (bao_shan % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--闪现!", 0, 15);
				} else if (bao_shan % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--暴击!", 0, 15);
					int b = g * 2;
					wo.hp -= b;
					cout << "YOU 减血" << b << "滴" << endl << "还剩" << wo.hp << "滴" << endl;
				} else {
					wo.hp -= g;
					cout << "YOU 减血" << g << "滴" << endl << "还剩" << wo.hp << "滴" << endl;
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
			cout << "你遇到了" << boss[xiao] << endl;
			int g = bossxingxi[xiao][1];
			int h = bossxingxi[xiao][0];
			cout << "攻击力:" << g << endl << "生命值:" << h << endl;
			g = g - wo.fangyuli;
			if (g < 0) g = 0;
			while (1) {
				cout << "你攻击" << endl;
				srand(time(NULL));
				int shan_bao = rand();
				if (shan_bao % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--闪现!", 0, 15);
				} else if (shan_bao % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--暴击!", 0, 15);
					int b = wo.zhanli * 2;
					h -= b;
					cout << xiaoguai[xiao] << "减血" << b << "滴" << endl << "还剩" << h << "滴" << endl;
				} else {
					h = h - wo.zhanli;
					cout << xiaoguai[xiao] << "减血" << wo.zhanli << "滴" << endl << "还剩" << h << "滴" << endl;
				}
				if (h <= 0) {
					cout << "win!" << endl;
					system("pause");
					break;
				}
				system("pause");
				cout << "对方攻击" << endl;
				srand(time(NULL));
				int bao_shan = rand();
				if (bao_shan % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--闪现!", 0, 15);
				} else if (bao_shan % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--暴击!", 0, 15);
					int b = g * 2;
					wo.hp -= b;
					cout << "YOU 减血" << b << "滴" << endl << "还剩" << wo.hp << "滴" << endl;
				} else {
					wo.hp -= g;
					cout << "YOU 减血" << g << "滴" << endl << "还剩" << wo.hp << "滴" << endl;
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
			cout << "正在开发\n";
			system("pause");
			break;
		}
		case 4: {
			cout << "正在开发\n";
			system("pause");
			break;
		}
		case 5: {
			srand(time(NULL));
			int shi = rand() % 5;
			cout << "你遇到了" << shidaimingwang[shi] << endl;
			int g = shidaimingwangxingxi[shi][1];
			int h = shidaimingwangxingxi[shi][0];
			cout << "攻击力:" << g << endl << "生命值:" << h << endl;
			g = g - wo.fangyuli;
			if (g < 0) g = 0;
			while (1) {
				cout << "你攻击" << endl;
				srand(time(NULL));
				int shan_bao = rand();
				if (shan_bao % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--闪现!", 0, 15);
				} else if (shan_bao % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--暴击!", 0, 15);
					int b = wo.zhanli * 2;
					h -= b;
					cout << shidaimingwang[shi] << "减血" << b << "滴" << endl << "还剩" << h << "滴" << endl;
				} else {
					h = h - wo.zhanli;
					cout << shidaimingwang[shi] << "减血" << wo.zhanli << "滴" << endl << "还剩" << h << "滴" << endl;
				}
				if (h <= 0) {
					cout << "win!" << endl;
					system("pause");
					break;
				}
				system("pause");
				cout << "对方攻击" << endl;
				srand(time(NULL));
				int bao_shan = rand();
				if (bao_shan % 32 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--闪现!", 0, 15);
				} else if (bao_shan % 34 == 0) {
					Sleep(1000);
					COLOR_PRINT2("--暴击!", 0, 15);
					int b = g * 2;
					wo.hp -= b;
					cout << "YOU 减血" << b << "滴" << endl << "还剩" << wo.hp << "滴" << endl;
				} else {
					wo.hp -= g;
					cout << "YOU 减血" << g << "滴" << endl << "还剩" << wo.hp << "滴" << endl;
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
			cout << "正在开发\n";
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
	cout << "按序号查询  0.退出" << endl;
	cout<<" __________________________________________________________________________"<<endl;
	cout<<"|1. 家传套装   10000灵魂                                                   |\n";
	cout<<"|2. 地煞套装   20000灵魂                                                   |\n";
	cout<<"|3. 龙宫套装   35000灵魂                                                   |\n";
	cout<<"|";
	COLOR_PRINT2("4. 天罡套装   50000灵魂                                                   ",5,15);
	cout<<"|\n";
	cout<<"|";
	COLOR_PRINT2("5. 白霜套装   100000灵魂                                                  ",5,15);
	cout<<"|\n";
	cout<<"|";
	COLOR_PRINT2("   神灵石     10000灵魂                                                   ",6,0);
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
			pr("","请你再去打怪",30);
			system("pause");
		} else {
			pr("","购买成功!",30);
			wo.zhanli+=10;
			wo.max_hp+=30;
			wo.hp=wo.max_hp;
			wo.fangyuli+=5;
		}
	} else if(i==2) {
		if(wo.linhun<10000) {
			pr("","请你再去打怪",30);
			system("pause");
		} else {
			pr("","购买成功!",30);
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
	cout << "战斗力+10" << endl;
	wo.zhanli += 10;
	system("pause");
}
void _7() {
	cout << "2022.4.13 游戏“以太”诞生了!        0.1版,内测\n";
	system("pause");
	cout << "2022.4.14 咕咕咕\n";
	system("pause");
	cout << "2022.4.15 增加基本函数咕咕~~           0.2版,内测\n";
	system("pause");
	cout << "2022.4.16 完善了\"战斗(增加了\"闪现 暴击\" 更新了\"十代冥王\")\"增加了\"法宝,休息\"咕咕~~       0.3版,内测\n";
	system("pause");
	cout << "2022.4.17 更新了\"法宝--救世圣莲 战斗--五行之王\"\n";
	system("pause");
	return ;
}
void _8() {
	pr("当前版本", "0.3", 1000);
	return ;
}
void _9() {
	string duihuan;
	cin >> duihuan;
	duihuan = ' ' + duihuan + ' ';
	if (wo.duihuanma.find(duihuan) != string::npos) {
		cout << "兑换成功" << endl;
		wo.linhun+=100000;
		system("pause");
		return;
	}
	cout << "兑换失败" << endl;
	system("pause");
	return ;
}
void _10() {
	system("start https://www.luogu.com.cn/team/43631");
	return ;
}
void _11() {
	cout << "休息成功! hp+10";
	wo.hp += 10;
	if (wo.hp > wo.max_hp) wo.hp = wo.max_hp;
	system("pause");
}
void _12() {
	cout << "按序号查询  0.退出" << endl;
	cout << "____________________________" << endl;
	cout << "|1. 救世圣莲               |" << endl;
	cout << "|                          |" << endl;
	cout << "|2. 地煞葫芦               |" << endl;
	cout << "|                          |" << endl;
	cout << "|3. 青玉宝瓶               |" << endl;
	cout << "|                          |" << endl;
	cout << "|4. 天罡古剑               |" << endl;
	cout << "|                          |" << endl;
	cout << "|5. 白霜镜                 |" << endl;
	cout << "|                          |" << endl;
	cout << "|6. 罗刹妖扇               |" << endl;
	cout << "|                          |" << endl;
	cout << "|7. 冥界钩爪               |" << endl;
	cout << "|                          |" << endl;
	cout << "|__________________________|" << endl;
	int n;
	cin >> n;
	switch (n) {
		case 1: {
			cout << "救世圣莲 :\n";
			cout << "攻击: 0\n";
			cout << "防御: 0\n";
			cout << "速度: 0\n";
			cout << "生命: 0\n";
			cout << "附加: 回满生命值\n";
			system("pause");
			break;
		}
		case 2: {
			cout << "地煞葫芦 :\n";
			cout << "攻击: 0\n";
			cout << "防御: 0\n";
			cout << "速度: 0\n";
			cout << "生命: 0\n";
			cout << "若对方HP<2倍你的MAX_HP 立刻嗝屁\n 否则你加伤1.25倍\n";
			system("pause");
			break;
		}
		case 3: {
			cout << "青玉宝瓶 :\n";
			cout << "攻击: 0\n";
			cout << "防御: 0\n";
			cout << "速度: 0\n";
			cout << "生命: 0\n";
			cout << "恢复魔法值\n";
			system("pause");
			break;
		}
		case 4: {
			cout << "未开发" << endl;
			system("pause");
			break;
		}
		case 5: {
			cout << "未开发" << endl;
			system("pause");
			break;
		}
		case 6: {
			cout << "未开发" << endl;
			system("pause");
			break;
		}
		case 7: {
			cout << "未开发" << endl;
			system("pause");
			break;
		}
	}
}
void _13()
{
	cout<<"当前你的技能:";
	for(int i=0;i<wo.ji.size();i++){
		cout<<wo.ji[i].s1<<":"<<wo.ji[i].s2<<endl;
	}
}
