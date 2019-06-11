#include "water.h"


//初始化

extern Afsluitdijkdam d0;
extern singledam d1;
extern singledam d2;
extern singledam d3;
extern singledam d4;
extern singledam d5;
extern singledam d6;
extern singledam d7;
extern singledam d8;
extern singledam d9;
extern singledam d10;
extern singledam d11;
extern singledam d12;
extern singledam d13;
extern singledam d14;
extern singledam d15;
extern singledam d16;
extern singledam d17;
extern singledam d18;
extern singledam d19;
extern singledam d20;
extern singledam d21;
extern singledam d22;
extern singledam d23;
extern singledam d24;
extern singledam d25;
extern singledam d26;
extern singledam d27;
extern singledam d28;
extern singledam d29;
extern singledam d30;
extern singledam d31;
extern singledam d32;
extern singledam d33;
extern singledam d34;
extern singledam d35;
extern singledam d36;
extern singledam d37;
extern singledam d38;
extern singledam d39;
extern singledam d40;
extern singledam d41;
extern doubledam d42;
extern singledam d43;
extern singledam d44;
extern singledam d45;
extern doubledam d46;
extern singledam d47;
extern singledam d48;
extern singledam d49;
extern singledam d50;
extern singledam d51;
extern singledam d52;
extern singledam d53;
extern singledam d54;
extern singledam d55;
extern singledam d56;
extern singledam d57;
extern singledam d58;
extern singledam d59;
extern singledam d60;
extern singledam d61;
extern singledam d62;

extern district o1;
extern district o2;
extern district o3;
extern district o4;
extern district o5;
extern district o6;
extern district o7;
extern district y8;
extern district y2;
extern district y3;
extern district y4;
extern district y5;
extern district y6;
extern district y7;
extern district  g1;
extern district  g2;
extern district  g3;
extern district  g4;
extern district  g5;
extern district  g6;
extern district  g7;
extern district p1;
extern district p2;
extern district p3;
extern district p4;
extern district p5;
extern district p6;
extern district p7;
extern district s1;
extern district s2;

extern vector<string> districtcard;
extern list<string> decarddistrictcard;
extern vector<string> tidalcard;
extern vector<string> desertcard;
extern string travelsal[30];
extern string allplayer[5];
extern bool issearch[30];
extern people player1;
extern people player2;
extern people player3;
extern people player4;
extern people player5;
extern people players[5];

extern dam* damarray[60];





int dam::wholedamnumber = 0;
int water::waterlevel = 1;
int water::h20ocube = 25;
int people::peoplenum = 5;
bool water::isAfsluitdijkdam = 0;
bool water::isdeltaengine = 0;
bool water::isriverbuffer = 0;
bool water::isstandardengine = 0;
int district::facnum = 5;
int district::portnum = 5;
int water::protec = 1000;


int main()
{
	water::setbegin();
	srand(unsigned(time(0)));
	cout << "欢迎进入《瘟疫危机：浪潮汹涌》游戏\n" << "请输入起始玩家数(2到5的整数)\n";
	string talk;
	int peoplenum;
	do {
		cin.sync();   //清空流
		cin.clear();  //清除流错误标记
		cin >> peoplenum;      //cin输入到int i，类型不符，超长将设置cin.fail为true
		if (cin.fail() || peoplenum > 6 || peoplenum < 2)
			cout << "输入错误，请重新输入" << endl; //出错显示信息
	} while (cin.fail()|| peoplenum>6|| peoplenum<2);
	people::peoplenum = peoplenum;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "初始玩家" << peoplenum <<"个数"<< endl;
	cout << "选择是否指定分配人物职业，输入y自己指定\n" ;
	cin >> talk;
	if(talk=="y")
	{
		vector<int> check;
		for (int i = 0; i < people::peoplenum;++i)
		{
			cout << "输入整数指定职业，不要重复，港口管理员—1，仓库管理员—2，主管—3，木匠—4，水泵工人—5，水利工程师—6，卫生工程师—7\n";
			int job;
			bool is = 0;
			do {
				cin.sync();  
				cin.clear();  
				cin >> job; 
				if(job >=1&& job <<7)
				{
					auto itr = find(check.cbegin(), check.cend(), job);
					is = cin.fail() || itr != check.end();
					if (is)
					cout << "输入错误，请重新输入" << endl; //出错显示信息
				}
				else
					is = 1;
			} while (is);
			players[i].career = job;
			check.push_back(job);
			ofstream file("log", ios_base::out | ios_base::app);
			file << "player" << i<< "的职业为"<< job<< endl;
		}
	}
	else {
		vector<int> carerr= { 1,2,3,4,5,6,7 };
		random_shuffle(carerr.begin(), carerr.end());
		for (int i = 0; i < people::peoplenum; ++i)
		{
			players[i].career = carerr[i];
			cout << "player" << i+1 << "的职业为" << carerr[i] << "\n";
			ofstream file("log", ios_base::out | ios_base::app);
			file << "player" << i+1<< "的职业为" << carerr[i] << endl;
		}
		carerr.clear();
		carerr.resize(0);
	}
	for (int i = 0; i < people::peoplenum; ++i)
		players[i].didian = "o7";
	int obst;
	cout << "输入整数选择难度，简单—1，中等—2，困难—3\n";
	do {
		cin.sync();   
		cin.clear();  
		cin >> obst;
		if (cin.fail()|| obst > 3 || obst < 1)
			cout << "输入错误，请重新输入" << endl; 
	} while (cin.fail() || obst > 3 || obst < 1);
	file.open("log", ios_base::out | ios_base::app);
	file  << " 难度" << obst << endl;
	tidalcard = {"y1","g1","o1","p1","y2","g2","o2","p2","y3","g3","o3","p3","y4","g4","o4","p4","y5","g5","o5","p5","y6","g6","o6","p6","y7","g7","o7","p7",
	"y1","g1","o1","p1","y2","g2","o2","p2","y3","g3","o3","p3","y4","g4","o4","p4","y5","g5","o5","p5","y6","g6","o6","p6","y7","g7","o7","p7"};
	districtcard = tidalcard;
	vector<string> special{ "t1","t2","t3","t4","t5","t6","t7","t8","t9","t10","t11","t12","t13","t14"};
	random_shuffle(special.begin(), special.end());
	random_shuffle(districtcard.begin(), districtcard.end());
	if (people::peoplenum != 5)//分发手牌
	{
		for (int i = 0; i < people::peoplenum+2; ++i)
			tidalcard.push_back(special[i]);
		random_shuffle(tidalcard.begin(), tidalcard.end());
		for (int i = 0; i < people::peoplenum; ++i)
		{
			for (int j = 0; j < 6 - people::peoplenum; ++j)
			{
				players[i].card.push_back(tidalcard.back());
				tidalcard.pop_back();
			}
		}
	}
	else
	{
		for (int i = 0; i < 8; ++i)
			tidalcard.push_back(special[i]);
		random_shuffle(tidalcard.begin(), tidalcard.end());
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				players[i].card.push_back(tidalcard.back());
				tidalcard.pop_back();
			}
		}
	}
	vector<string> tem;
	srand(unsigned(time(0)));
	for (int i = 0; i < obst; ++i)
	{
		int all;
		if (people::peoplenum == 2 || people::peoplenum == 3)
		{
			 all= 52 + obst;
		}
		else
		{
			all = 54 + obst;
		}
		int a = random(i *all / (obst + 1), (i + 1) * all / (obst + 1));
		tidalcard.resize(all);
		string exch = tidalcard[a];
		tidalcard[a] = "s";
		tidalcard.push_back(exch);
	}
	for (int i = 0; i < 3; ++i)
	{
		drawandtide(3);
	}
	for (int i = 0; i < 3; ++i)
	{
		drawandtide(2);
	}
	for (int i = 0; i < 3; ++i)
	{
		drawandtide(1);
	}
	water::waterflow();
	while (!water::issuccess())
	{
		for (int i = 0; i < people::peoplenum; ++i)
		{
			cout << "开始行动，输入字符，1-11为普通行动，dis展示，spe使用特殊卡牌，q结束行动\n";
			string work;
			bool is1,is2,is3=0;
			water::renew();
			players[i].renew();
			while (!is3)
			{
					do {
						cin.sync();   //清空流
						cin.clear();  //清除流错误标记
						cin >> work;
						is1 = work == "1" || work == "2" || work == "3" || work == "4" || work == "5" || work == "6" || work == "7" || work == "8" || work == "9" || work == "10" || work == "11";
						is2 = work == "dis" || work == "spe";
						is3 = work == "q";
						if (!(is1 || is2 || is3))
							cout << "输入错误，请重新输入" << endl; //出错显示信息
					} while (!(is1 || is2 || is3));
					if (is1)
					{
						if (players[i].movepjudgu())
						{
							players[i].move(stoi(work));
							if (water::issuccess())
								goto labelfinal;
						}
						else
						{
							cout << "本角色活动点数不足\n";
						}
					}
					if (is2)
					{
						if (work == "dis")
							display();
						if (work == "spe")
							people::special();
					}

			}
			cout << "排水活动开始,输入q跳过该阶段\n";
			cin >> work;
			if (work != "q")
			{
				if (work == "spc")
					people::special();
				water::drain();
			}
			cout << "抽牌阶段开始,spe使用特殊卡牌,dis展示\n";
			for (int j = 0; j < 2; ++j)
			{
				cin >> work;
				if (work == "spc")
					people::special();
				if (work == "dis")
					display();
				string outcard = tidalcard.back();
				cout << "players"<<i<< "玩家抽到" << outcard;
				ofstream file("log", ios_base::out | ios_base::app);
				file << "players" << i << "玩家抽到" << outcard << endl;
				if (outcard == "s")
				{
					stormcome();
					if (water::isfail())
						goto labelfinal;
				}
				else
					players[i].card.push_back(outcard);
				tidalcard.pop_back();
			}
			cout << "浪潮侵袭阶段开始,spe使用特殊卡牌,dis展示\n";
			for (int j = 0; j < water::oceanheight(); ++i)
			{
				cin >> work;
				if (work == "spc")
					people::special();
				if (work == "dis")
					display();
				drawandtide(1);
				if (water::isfail())
					goto labelfinal;
			}
			cout << "准备结算水流流动,spe使用特殊卡牌,dis展示\n";
			cin >> work;
			if (work == "spc")
				people::special();
			if (work == "dis")
				display();
			water::waterflow();
			if (water::isfail())
				goto labelfinal;
		}
	}

labelfinal:
	if (water::issuccess())
	{
		cout << "恭喜，在您的努力下，洪水得到了控制\n";
		ofstream file("log", ios_base::out | ios_base::app);
		file << " 游戏成功" << endl; 
	}
	if(water::isfail())
	{
		cout << "很遗憾，虽然您奋力对抗洪灾，但水患造成的巨大破坏已经无法挽回\n";
		ofstream file("log", ios_base::out | ios_base::app);
		file << " 游戏失败" << endl; 
	}
	file.close();
	return 0;
}
