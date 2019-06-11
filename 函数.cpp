#include "water.h"
Afsluitdijkdam d0("s2", "s1");
singledam d1("o1", "s1", 1);
singledam d2("o2", "s1", 1);
singledam d3("o4", "o2", 1);
singledam d4("o4", "s1", 1);
singledam d5("o5", "s1", 1);
singledam d6("o6", "s1", 1);
singledam d7("o7", "s1", 1);
singledam d8("p1", "s1", 1);
singledam d9("p2", "s1", 0);
singledam d10("p1", "p2", 1);
singledam d11("p2", "s2", 0);
singledam d12("p1", "s2", 1);
singledam d13("p1", "p3", 1);
singledam d14("p3", "s2", 0);
singledam d15("o7", "p3", 1);
singledam d16("p3", "p4", 0);
singledam d17("o7", "y4", 1);
singledam d18("y4", "p4", 1);
singledam d19("o7", "y1", 0);
singledam d20("o7", "g1", 0);
singledam d21("o6", "g1", 1);
singledam d22("o5", "g1", 1);
singledam d23("o5", "g2", 1);
singledam d24("o4", "g2", 1);
singledam d25("g1", "g2", 1);
singledam d26("o3", "o4", 1);
singledam d27("o2", "o3", 1);
singledam d28("o1", "o3", 1);
singledam d29("g2", "g3", 1);
singledam d30("g3", "g4", 1);
singledam d31("g1", "g3", 1);
singledam d32("y1", "g3", 1);
singledam d33("y1", "y2", 1);
singledam d34("y1", "y4", 1);
singledam d35("y1", "g1", 1);
singledam d36("y5", "p4", 1);
singledam d37("p4", "s2", 0);
singledam d38("p4", "p5", 0);
singledam d39("p4", "y6", 1);
singledam d40("y2", "y3", 1);
singledam d41("y2", "g5", 1);
doubledam d42("g4", "g5", 2);
singledam d43("g5", "g6", 1);
singledam d44("g6", "g7", 1);
singledam d45("y3", "y6", 1);
doubledam d46("y3", "y7", 2);
singledam d47("p5", "y7", 1);
singledam d48("p5", "p6", 1);
singledam d49("p6", "s2", 1);
singledam d50("p6", "s1", 1);
singledam d51("p7", "s1", 1);
singledam d52("p6", "p7", 0);
singledam d53("o1", "o2", 1);
singledam d54("o4", "o5", 1);
singledam d55("o5", "o6", 1);
singledam d56("o6", "o7", 1);
singledam d57("o7", "p1", 1);
singledam d58("y2", "g3", 0);
singledam d59("g2", "g4", 0);
singledam d60("p5", "s2", 0);
singledam d61("y2", "y5", 0);
singledam d62("y6", "y7", 0);
dam* (damarray)[63];

district o1('o', 0, { "o2","o3" }, { "s1" ,"o2","o3" }, 1);
district o2('o', 0, { "o1","o3","o4" }, { "s1","o1","o3","o4" }, 2);
district o3('o', 0, { "o2","o4","h1" }, { "o2", "o4" }, 3);
district o4('o', 0, { "o2","o3","o5","g1","h1" }, { "s1","o2","o3","o5","g1" }, 4);
district o5('o', 0, { "o4","o6","g1","g2" }, { "s1","o4","o6","g1","g2" }, 5);
district o6('o', 0, { "o5","o7","g1" }, { "s1","o5","o7","g1" }, 6);
district o7('o', 0, { "o6","g1","y1","y4","p1","p3" }, { "s1","o6","g1","y1","y4","p1","p3" }, 7);
district g1('g', 0, { "o4","o5","o6","y1","g2","g3" }, { "o4","o5","o6","y1","g2","g3" }, 8);
district g2('g', 0, { "g1","g3","g4","o4","o5","h1" ,"h2" }, { "g1","g3","g4","o4","o5" }, 9);
district g3('g', 0, { "g1","g2","g4","y1","y2" }, { "g1","g2","g4","y1","y2" }, 10);
district g4('g', 0, { "g2","g3","g5","h2" }, { "g2","g3","g5" }, 11);
district g5('g', 0, { "g4","g6","y2" }, { "g4","g6","y2" }, 12);
district g6('g', 0, { "g5","g7" }, { "g5","g7" }, 13);
district g7('g', 0, { "g6" }, { "g6" }, 14);
district y8('y', 0, { "g1","o7","y2","y4" }, { "g1","o7","y2","y4" }, 15);
district y2('y', 0, { "y1","y5","y3","g3","g5","h3","h4" }, { "y1","y5","y3","g3","g5" }, 16);
district y3('y', 0, { "y2","y6","y7","h4","h6" }, { "y2","y6","y7" }, 17);
district y4('y', 0, { "o7","y1","p4","h3" }, { "o7","y1","p4" }, 18);
district y5('y', 0, { "y2","p4","h3","h4" }, { "y2","p4" }, 19);
district y6('y', 0, { "y3","y7","p4","h4" }, { "y3","y7","p4" }, 20);
district y7('y', 0, { "y3","y6","p5","h5","h6" }, { "y3","y6","p5" }, 21);
district p1('p', 0, { "o7","p2","p3" }, { "o7","p2","p3","s1","s2" }, 22);
district p2('p', 1, { "p1" }, { "p1", "s1", "s2" }, 23);
district p3('p', 2, { "o7","p1","p4" }, { "o7","p1","p4","s2" }, 24);
district p4('p', 2, { "p3","p5","y4","y5","h3","h4" }, { "p3","p5","y4","y5" ,"s2" }, 25);
district p5('p', 2, { "p4","p6","y7" }, { "p4","p6","y7","s2" }, 26);
district p6('p', 0, { "p5","p7","h5" }, { "p5","p7","s1","s2" }, 27);
district p7('p', 0, { "p6","h5" }, { "p6","s1" }, 28);
district h1('h', 0, { "o3","o4","g2" }, {}, 30);
district h2('h', 0, { "g2","g4" }, {}, 31);
district h3('h', 0, { "y2","y4","y5","p4" }, {}, 32);
district h4('h', 0, { "y2","y3","y5","y6","p4" }, {}, 33);
district h5('h', 0, { "y7","h6","p6","p7" }, {}, 34);
district h6('h', 0, { "y3","y7","h6" }, {}, 35);
district s1('s', 2, {}, {}, 0);
district s2('s', 2, {}, {}, 29);
vector<string> districtcard;
list<string> decarddistrictcard;
vector<string> tidalcard;
vector<string> desertcard;
string travelsal[30] = { "s1","o1","o2","o3","o4" ,"o5","o6","o7","g1","g2","g3","g4","g5","g6","g7",
"y1","y2","y3","y4","y5","y6","y7","p1","p2","p3","p4","p5","p6","p7","s2" };
string allplayer[5] = { "player1","player2","player3","player4","player5" };

bool issearch[30] = { 0,0,0 };

people player1(1);
people player2(2);
people player3(3);
people player4(4);
people player5(5);
people players[5] = { player1, player2,player3,player4,player5 };




double random(double start, double end)
{
	return start + (end - start) * rand() / (RAND_MAX + 1.0);
}



vector<list<int>> hpath;//方便删除
//遍历用
vector<list<int>> wetpath;


bool bfs_chain(const string a, const string b)//广度搜索，用于联通水系判断
{
	for (int i = 0; i < 30; ++i)
		issearch[i] = 0;
	if (a == b)
		return 1;
	int orign = translate(a);
	int target = translate(b);
	deque<int> arr;
	issearch[orign] = 1;
	arr.push_back(orign);
	while (!arr.empty())
	{
		int temp = arr.front();
		arr.pop_front();
		issearch[temp] = 1;
		for (auto pt = wetpath[temp].begin(); pt!= wetpath[temp].end(); ++pt)
		{
			int temp1 = *pt;
			if (issearch[temp1] == 0)
			{
				if (temp1 == target)
					return 1;
				arr.push_back(temp1);
			}
		}
		
	}
	return 0;
}

void water::waterflow()
{
	if (protec == 500)//跳过了本回合判定
		return;
	string temp1;
	district temp2,temp3;
	diqupanding(travelsal[0], temp2);
	water::h20ocube -=oceanheight() - temp2.waterheight;
	temp2.waterheight = oceanheight();
	if (!isAfsluitdijkdam)
	{
		diqupanding(travelsal[29], temp2);
		temp2.waterheight = oceanheight();
		water::h20ocube -= oceanheight() - temp2.waterheight;
	}
	for (int i = 0; i < 30; ++i)
		issearch[i] = 0;
	for (int i = 0; i < 30; ++i)
	{
		diqupanding(travelsal[i], temp2);
		if (temp2.waterheight >= 2)
		issearch[i] = 1;
	}
	for (int i = 0; i < 30; ++i)
	{
		if (issearch[i] = 1)
		{
			diqupanding(travelsal[i], temp2);
			for (auto j : hpath[i])
			{
				diqupanding(travelsal[j], temp3);
				if (temp2.waterheight > temp3.waterheight + 1)
					temp3.waterheight = temp2.waterheight - 1;
				ofstream file("log", ios_base::out | ios_base::app);
				file <<"地区"<< travelsal[j]<<" 涨水到" << temp3.waterheight;
				file.close();
			}
		}
	}
	for (int i = 0; i < 30; ++i)
		issearch[i] = 0;
	for (int i = 0; i < 30; ++i)
	{
		diqupanding(travelsal[i], temp2);
		if (temp2.waterheight >= 2)
			issearch[i] = 1;
	}
	for (int i = 0; i < 30; ++i)
	{
		if (issearch[i] = 1)
		{
			diqupanding(travelsal[i], temp2);
			for (auto j : hpath[i])
			{
				diqupanding(travelsal[j], temp3);
				if (temp2.waterheight > temp3.waterheight + 1)
					temp3.waterheight = temp2.waterheight - 1;
				ofstream file("log", ios_base::out | ios_base::app);
				file << "地区"<<travelsal[j] << " 涨水到" << temp3.waterheight <<endl;
				file.close();
			}

		}
	}

}
void water::inundation(const string &orign)
{
	int ori = translate(orign);
	deque<int> arr;
	for (int i = 0; i < 30; ++i)
		issearch[i] = 0;
	issearch[ori] = 1;
	arr.push_back(ori);
	while (!arr.empty())
	{
		int temp = arr.front();
		arr.pop_front();
		issearch[temp] = 1;
		if(temp!=protec)
		{ 
			for (auto pt : hpath[temp ])
			{
				bool is = pt != protec&&pt!=0&&issearch[pt]==0;
				if ((*damarray[0]).damempty())
					is = is && pt != 29;
				if(is)
				{ 
				district temp1;
				diqupanding(travelsal[pt], temp1);
				if (temp1.waterheight == 3)
					arr.push_back(pt);
				else
				{
					++temp1.waterheight;
					--water::h20ocube;
					ofstream file("log", ios_base::out | ios_base::app);
					file << travelsal[pt] << " 涨水到" << temp1.waterheight;
				}
				}
			}
		}
	}

}
void water::renew()//更新荷兰男孩
{
	protec = 1000;
}
void water::setwetpath()
{
	district temp1,temp2;
	vector<list<int>> temp(30);
	for (int i = 0; i < 30; ++i)
	{
		diqupanding(travelsal[i], temp1);
		if (temp1.waterheight != 0)
		{
			for (auto j : hpath[i])
			{
				diqupanding(travelsal[j], temp2);
				if (temp2.waterheight != 0)
					wetpath[i].push_back(j);
			}
		}
	}
}
void water::drain()
{
	for (int j = 0; j < 30; ++j)
		issearch[j] = 0;
	string temp1,temp3;
	district temp2;
	bool is=1;
	water::setwetpath();
	do {
		
        if (isnotdistrict(temp1, temp2, 1))
			return;
		if (issearch[translate(temp1)] == 1)
		{
			cout << "该地排水厂已工作过，是否退出排水，按q退出\n";
			cin >> temp1;
			is = (temp1 != "q");
		}else
		{
			cout << "\n";
			cin >> temp3;
			if(bfs_chain(temp1,temp3))
			{
				diqupanding(temp3, temp2);
				--temp2.waterheight;
				++h20ocube;
				water::setwetpath();
				ofstream file("log", ios_base::out | ios_base::app);
				file << " 排水厂" <<temp1<<" 排除"<<temp3<< " 的水";
				file.close();
				issearch[translate(temp1)] = 1;
			}else
			{ 
				cout << "地区不水系连通";
			}
		}
	} while (is);
	return;
}
int water::oceanheight()
{
	if (waterlevel <=3)
		return 2;
	if (waterlevel <= 6 && waterlevel >= 4)
		return 3;
	if (waterlevel >= 7)
		return 4;
	return 2;
}

void water::setbegin()
{
	isAfsluitdijkdam = 0;
	isdeltaengine = 0;
	isriverbuffer = 0;
	isstandardengine = 0;
	protec = 1000;
	damarray[0] = &d0;
	damarray[1] = &d1;
	damarray[2] = &d2;
	damarray[3] = &d3;
	damarray[4] = &d4;
	damarray[5] = &d5;
	damarray[6] = &d6;
	damarray[7] = &d7;
	damarray[8] = &d8;
	damarray[9] = &d9;
	damarray[10] = &d10;
	damarray[11] = &d11;
	damarray[12] = &d12;
	damarray[13] = &d13;
	damarray[14] = &d14;
	damarray[15] = &d15;
	damarray[16] = &d16;
	damarray[17] = &d17;
	damarray[18] = &d18;
	damarray[19] = &d19;
	damarray[20] = &d20;
	damarray[21] = &d21;
	damarray[22] = &d22;
	damarray[23] = &d23;
	damarray[24] = &d24;
	damarray[25] = &d25;
	damarray[26] = &d26;
	damarray[27] = &d27;
	damarray[28] = &d28;
	damarray[29] = &d29;
	damarray[30] = &d30;
	damarray[31] = &d31;
	damarray[32] = &d32;
	damarray[33] = &d33;
	damarray[34] = &d34;
	damarray[35] = &d35;
	damarray[36] = &d36;
	damarray[37] = &d37;
	damarray[38] = &d38;
	damarray[39] = &d39;
	damarray[40] = &d40;
	damarray[41] = &d41;
	damarray[42] = &d42;
	damarray[43] = &d43;
	damarray[44] = &d44;
	damarray[45] = &d45;
	damarray[46] = &d46;
	damarray[47] = &d47;
	damarray[48] = &d48;
	damarray[49] = &d49;
	damarray[50] = &d50;
	damarray[51] = &d51;
	damarray[52] = &d52;
	damarray[53] = &d53;
	damarray[54] = &d54;
	damarray[55] = &d55;
	damarray[56] = &d56;
	damarray[57] = &d57;
	damarray[58] = &d58;
	damarray[59] = &d59;
	damarray[60] = &d60;
	damarray[61] = &d61;
	damarray[62] = &d62;
	hpath.push_back({ 23 });
	hpath.push_back({});
	hpath.push_back({ 4 });
	hpath.push_back({});
	hpath.push_back({ 2 });
	hpath.push_back({ 8 });
	hpath.push_back({});
	hpath.push_back({ 8,15,22 });//o7
	hpath.push_back({ 5,7 });//g1
	hpath.push_back({ 11 });
	hpath.push_back({ 16 });
	hpath.push_back({ 9 });
	hpath.push_back({});
	hpath.push_back({});
	hpath.push_back({});
	hpath.push_back({ 7 });//y1
	hpath.push_back({ 10,19 });
	hpath.push_back({});
	hpath.push_back({});
	hpath.push_back({ 16 });
	hpath.push_back({ 21 });//y6
	hpath.push_back({ 20 });//y7
	hpath.push_back({ 7 });
	hpath.push_back({ 0,29 });
	hpath.push_back({ 25,29 });
	hpath.push_back({ 24,26,29 });//p4
	hpath.push_back({ 25,29 });
	hpath.push_back({ 28 });
	hpath.push_back({ 27 });//p7
	hpath.push_back({ 23,24,25,26 });
}

//template<class t>
//void cardshuffle(vector<t> arr)
//{
//	random_shuffle(arr.begin(), arr.end());
//}

template <class t>
vector<t>& operator+(vector<t>& a, vector<t>& b)
{
	vector<t> temp;
	for (int i = 0; i < a.size(); ++i)
		temp.push_back(a[i]);
	for (int i = 0; i < b.size(); ++i)
		temp.push_back(b[i]);
	return temp;
}

inline void tidecome(string hitarea,int n )
{
	district temp1;
	string temp2;
	bool is = 0;//标记大坝安全
	bool it;
	int temp3;
	diqupanding(hitarea, temp1);
	for (int i = 0; i < n; ++i)
	{
		for (auto j : temp1.hnear)
		{
			dammatch(hitarea, j, it, temp3);//肯定能匹配，只是获得大坝编号
			if ((*damarray[temp3]).damexist())
				is = 1;//还有大坝可破坏
		}
		if(is==1)
		{
			while (isnotdam(hitarea, temp3, temp2)&&((*damarray[temp3]).damempty()))
				cout << "大坝不匹配或大坝已不存在，请重新输入\n";
			(*damarray[temp3]).destdam();
		}
		else
		{
			if (temp1.waterheight < 3)
			{
				++temp1.waterheight;//水涨一格
				--water::h20ocube;
				ofstream file("log", ios_base::out | ios_base::app);
				file << travelsal[temp1.index]<<"水涨一格";
				file.close();
			}
			else
			{
				water::inundation(travelsal[temp1.index]);
			}
		}
	}
}
void drawandtide(int n)//浪潮侵袭，毁坝,涨水
{
	 string temp1(districtcard.back());
	 cout << "浪潮侵袭地区" << temp1 <<" "<<n<<"次"<< "\n";
	 tidecome(temp1, n);
	 districtcard.pop_back();
	 decarddistrictcard.push_back(temp1);
}

void dam::calltodestory()
{
	cout << "大坝数目不够，输入要摧毁的坝地址\n";
	string temp1, temp2;
	int dedam;
	bool is;
	do
	{
		cin >> temp1 >> temp2;
		dammatch(temp1, temp2,is,dedam);
		is = is || (*damarray[dedam]).damexist();
	} while (!is);
	(*damarray[dedam]).destdam();
}
void singledam::consdam()
{
	if (this->isdam == 1)
		return;
	this->isdam = 1;
	--dam::wholedamnumber;
	int temp1 = translate(district1);
	int temp2 = translate(district2);
	list<int>::iterator de = find(hpath[temp1].begin(), hpath[temp1].end(), temp2);
	if (de != (hpath[temp1]).cend())
		hpath[temp1].erase(de);
	de = find(hpath[temp2].begin(), hpath[temp2].end(), temp1);
	if (de != (hpath[temp2]).cend())
		hpath[temp2].erase(de);
	if (dam::wholedamnumber < 0)
	{
		calltodestory();
	}
}
void singledam::destdam()
{
	if (this->isdam == 0)
		return;
	++dam::wholedamnumber;
	this->isdam = 0;
	int temp1 = translate(district1);
	int temp2 = translate(district2);
	list<int>::iterator de = find((hpath[temp1]).begin(), (hpath[temp1]).end(), temp2);
	if (de == (hpath[temp1]).end())
		hpath[temp1].push_back(temp2);
	de = find(hpath[temp2].begin(), hpath[temp2].end(), temp1);
	if (de ==hpath[temp2].end())
		hpath[temp2].push_back(temp1);
}
bool singledam::damexist()
{
	return this->isdam ? 1 : 0;
}
bool singledam::damempty()
{
	return this->isdam ? 0 : 1;
}
void doubledam::consdam()
{
	if (this->damnum == 2)
		return;
	++this->damnum;
	--dam::wholedamnumber;
	int temp1 = translate(district1);
	int temp2 = translate(district2);
	list<int>::iterator de = find(hpath[temp1].begin(), hpath[temp1].end(), temp2);
	if (de != hpath[temp1].end())
		hpath[temp1].erase(de);
	de = find(hpath[temp2].begin(), hpath[temp2].end(), temp1);
	if (de != hpath[temp2].end())
		hpath[temp2].erase(de);
	if (dam::wholedamnumber < 0)
		calltodestory();
}
void doubledam::destdam()
{
	if (damnum == 0)
		return;
	--this->damnum;
	++dam::wholedamnumber;
	int temp1 = translate(district1);
	int temp2 = translate(district2);
	list<int>::iterator de = find(hpath[temp1].begin(), hpath[temp1].end(), temp2);
	if (de != hpath[temp1].end())
		hpath[temp1].erase(de);
	de = find(hpath[temp2].begin(), hpath[temp2].end(), temp1);
	if (de != (hpath[temp2]).end())
		hpath[temp2].erase(de);
}
bool doubledam::damexist()
{
	return this->damnum == 0 ? 0 : 1;
}
bool doubledam::damempty()
{
	return this->damnum == 2 ? 0 : 1;
}
bool Afsluitdijkdam::damexist()
{
	return water::isAfsluitdijkdam;
}
bool Afsluitdijkdam::damempty()
{
	return !water::isAfsluitdijkdam;
}
void Afsluitdijkdam::consdam(){}
void Afsluitdijkdam::destdam(){}
bool district::isportconstruct()
{
	if (this->port = 1)
		return 1;
	else {
		if (portnum > 0)
		{
			this->port = 1;
			--portnum;
			return 1;
		}
		else {
			string temp1;
			district temp2;
			cout << "没有多余码头建筑，按q放弃此次建设，其他键继续\n";
			cin >> temp1;
			if (temp1 == "q")
				return 0;
			cout << "\n";
			if (isnotdistrict(temp1, temp2, 1))
			{
				return 0;
			}
			ofstream file("log", ios_base::out | ios_base::app);
			file << temp1 << "地区码头拆毁" << endl;
			temp2.port = 0;
			this->port = 1;
		}
	}
}
bool district::isfacconstruct()
{
	if (this->fac == 1)
		return 1;
	else
	{
		if (facnum > 0)
		{
			this->fac = 1;
			--facnum;
			return 1;
		}
		else {
		string temp1;
		district temp2;
		cout << "没有多余排水厂，按q放弃此次建设，其他键继续\n";
		cin >> temp1;
		if (temp1 == "q")
			return 0;
		cout << "\n";
		if (isnotdistrict(temp1,temp2,0))
		{
			return 0;
		}
		ofstream file("log", ios_base::out | ios_base::app);
		file << temp1 << "地区排水厂拆毁" << endl;
		file.close();
		temp2.fac = 0;
		this->fac = 1;
		return 1;
		}
	}
}

void people::movpoi()
{
	movepoin(-1);
}
void people::movepoin(int n)
{
	this->movepoint += n;
}
bool people::movepjudgu()
{
	return this->movepoint>0;
}
void people::move(const int &b)
{
	bool (*carfun)( people & p);//职业技能的函数指针
	switch (this->career)
	{
	case 1:
		carfun = portmanager;
		break;
	case 2:
		carfun = warehousemanager;
		break;
	case 3:
		carfun = monitor;
		break;
	case 4:
		carfun = carpenter;
		break;
	case 5:
		carfun = pumpworker;
		break;
	case 6:
		carfun = waterengineer;
		break;
	case 7 :
		carfun= medicalworker;
			break;
	default:
		carfun = nothing;
		break;
	}

	switch (b)
	{
	case 1://临近地区移动
	{
	string temp1;
	district temp2;
	bool is=0;
	cout << "输入需要移动到的地区名\n";
	if (isnotdistrict(temp1, temp2))
		return;
	diqupanding(didian, temp2);
	if (temp2.pathjudge(didian))
	{
		ofstream file("log", ios_base::out | ios_base::app);
		file <<allplayer[ind]<<"从"<<didian<<"来到"<<temp1 << endl;
		file.close();
		this->didian = temp1;
	}
	else
	{
		cout << "不是临近地区，将返回主菜单\n";
		return;
	}
	this->movpoi();
	break; }
	case 2://	弃掉一张小地区牌，移动到对应地区
	{
		string temp1;
		district temp2;
		cout << "输入要弃的牌名，并将要移动到该地区\n";
		if (isnotdistrict(temp1, temp2))
			return;
		auto de = find(this->card.cbegin(), this->card.cend(), temp1);
		if (de == this->card.end())
		{
			cout << "没有该卡牌\n";
			return;
		}
		ofstream file("log", ios_base::out | ios_base::app);
		file << allplayer[ind] << "从" << didian << "弃牌来到" << temp1 << endl;
		file.close();
		this->card.erase(de);
		this->didian = temp1;
		this->movpoi();
		break;
	}
	case 3://码头移动
	{
		string temp1;
		district temp2;
		cout << "输入您想去的地区\n";
		if (isnotdistrict(temp1, temp2))
			return;
		if (temp2.port == 0)
		{
			cout << "您所去地区没有码头，将返回主菜单\n";
			return;
		}
		ofstream file("log", ios_base::out | ios_base::app);
		file << allplayer[ind] << "从" << didian << "码头移动到" << temp1 << endl;
		didian = temp1;
		this->movepoint -= 1;
		break; }
	case 4://弃掉当前小地区的地区牌，移动到任意地区
	{
		auto decard=find(this->card.begin(), this->card.end(), didian);
		if (decard == card.end() && card.back() != didian)
		{
			cout<< "并没有当前地区卡牌，将返回\n";
			return;
		}
		string temp1;
		district temp2;
		if (isnotdistrict(temp1, temp2))
			return;
		ofstream file("log", ios_base::out | ios_base::app);
		file << allplayer[ind] << "弃当前地区牌，从" << didian << "传送到" << temp1 << endl;
		decarddistrictcard.push_back(*decard);
		card.erase(decard);
		didian = temp1;
		this->movepoint -= 1;
		break;
	}
	case 5://弃掉当前小地区的地区牌，在当前地区建造码头
	{
		auto decard = find(this->card.begin(), this->card.end(), didian);
		if (decard == card.end() && card.back() != didian)
		{
			cout << "并没有当前地区卡牌，将返回\n";
			return;
		}
		district temp1;
		diqupanding(didian, temp1);
		if (temp1.port == 1)
		{
			cout << "地区已有码头，将返回\n";
			return;
		}
		if (temp1.isportconstruct())
		{
			decarddistrictcard.push_back(*decard);
			card.erase(decard);
			ofstream file("log", ios_base::out | ios_base::app);
			file << allplayer[this->ind]<<"修建了"<<didian << "地区的码头" << endl;
		}
		else
		{
			return;
		}
		
	}
	case 6://弃掉当前小地区的地区牌，在当前地区建造排水厂
	{
		auto decard = find(this->card.begin(), this->card.end(), didian);
		if (decard == card.end() && card.back() != didian)
		{
			cout << "并没有当前地区卡牌，将返回\n";
			return;
		}
		district temp1;
		diqupanding(didian, temp1);
		if (temp1.fac == 1)
		{
			cout << "地区已有排水厂，将返回\n";
			return;
		}
		if(temp1.isfacconstruct())
		{ 
			ofstream file("log", ios_base::out | ios_base::app);
			file << (allplayer[this->ind]) << "在" << didian << "修建" << didian <<"地区的排水厂"<< endl;
			file.close();
			decarddistrictcard.push_back(*decard);
			card.erase(decard);
		}
		else
		{
			return;
		}
	}
	case 7://排水
	{
		district temp1;
		diqupanding(didian, temp1);
		bool it = temp1.waterheight;
		if (!it)
		{
			cout << "水已排空，将返回主菜单\n";
			return;
		}
		ofstream file("log", ios_base::out | ios_base::app);
		file << allplayer[ind] << "在" << didian << "排除一格水" << endl;
		file.close();
		(temp1.waterheight)-=1;//移动成功
		++water::h20ocube;
		this->movepoint -= 1;
		break; }
	case 8://建造大坝
	{
		bool is;
		string temp1;
		district temp2;
		int temp3=100;
		diqupanding(didian, temp2);
		if (temp2.waterheight != 0)
		{
			cout << "有水，大坝无法建设,将返回主菜单\n";
			return;
		}
		if (isnotdistrict(temp1, temp2))
			return;
		int newdamsite;//新建大坝坝地址
		dammatch(didian, temp1, is, newdamsite);
		if (isnotdam(didian,temp1,newdamsite))
		{
			cout << "不是临近地区，将返回主菜单\n";
			return;
		}
		else
		{
			if (!(*damarray[newdamsite]).damempty())
			{
				cout << "地已有大坝,将返回主菜单\n";
				return;
			}
			else {
				ofstream file("log", ios_base::out | ios_base::app);
				file << allplayer[ind] << "在" << didian << "与" << temp1 <<"之间成功修筑大坝"<< endl;
				(*damarray[newdamsite]).consdam();
			}	
			
		}
		this->movpoi();
		break;}
	case 9://给与/索取与你处于同一地区的一个角色的一张地区牌
	{
		string temp1;
		people temp2;
		cout << "输入give给予，输入ask索取，其他将退出\n";
		cin >> temp1;
		if (temp1 == "give")
		{
			cout << "输入另一名角色名\n";
			if (isnotplayer(temp1, temp2, people::peoplenum) || temp2.didian != this->didian)
			{
				cout << "\n";
				return;
			}
			cout << "输入要给与手牌\n";
			cin >> temp1;
			auto de = find(this->card.begin(), this->card.end(), temp1);
			if (de == this->card.end())
			{
				cout << "没有该卡牌\n";
				return;
			}
			temp2.card.push_back(*de);
			this->card.erase(de);
			this->movpoi();
		}
		if (temp1 == "ask")
		{
			cout << "输入另一名角色名\n";
			if (isnotplayer(temp1, temp2, people::peoplenum) || temp2.didian != this->didian)
			{
				cout << "\n";
				return;
			}
			cout << "输入要索取手牌\n";
			cin >> temp1;
			auto de = find(temp2.card.begin(), temp2.card.end(), temp1);
			if (de == temp2.card.end())
			{
				cout << "没有该卡牌\n";
				return;
			}
			this->card.push_back(*de);
			temp2.card.erase(de);
			this->movpoi();
		}

		break;
	}
	case 10://建造水利设施,必须处在对应的地区
	{
		int cnt = 0;
		for (auto i : this->card)
		{
			if (i[0] == this->didian[0])
				++cnt;
		}
		if (cnt<5)
		{
			cout << "没有五张同该大地区牌,将返回\n";
			return;
		}
		string temp;
		vector <string> temp1;//要弃的牌
		for (int i = 0; i < 5; ++i)//选择要弃的牌
		{
			cout << "选择要弃的牌\n";
	label10_1:cin >> temp;
		auto decard = find(this->card.begin(), this->card.end(), temp);
		if (decard == card.end() && card.back() != temp)
		{
			cout << "并没有该卡牌，请重新输入\n";
			goto label10_1;
		}
	
		if (temp[0] != this->didian[0])
		{
			cout << "卡牌不同与自身的大地区，请重新输入\n";
			temp1.clear();
			goto label10_1;
		}
	
		temp1.push_back(temp);
	}
		cout << "确定要建设水利工程？(按q退出)\n";
		cin >> temp;
		if (temp == "q")
			return;
		for (int i = 0; i < 5; ++i)
		{
			auto decard = find(this->card.begin(), this->card.end(), temp1[i]);
			decarddistrictcard.push_back(*decard);
			card.erase(decard);
			ofstream file("log", ios_base::out | ios_base::app);
			file << allplayer[ind] << "弃掉手牌" << temp1[i] << endl;
		}
		switch (this->didian[0])
		{
		case 'o':
		{
			ofstream file("log", ios_base::out | ios_base::app);
			file << allplayer[ind] << "建设三角洲工程" << endl;
			water::deltaengine();
			break;
		}
		case'g':
		{
			ofstream file("log", ios_base::out | ios_base::app);
			file << allplayer[ind] << "建设河流缓冲带" << endl;
			water::riverbuffer();
		break; }
		case'y':
		{
			ofstream file("log", ios_base::out | ios_base::app);
			file << allplayer[ind] << "建设标准化工程" << endl;
			water::standardengine();
			break;
		}
		case'p':
		{
			ofstream file("log", ios_base::out | ios_base::app);
			file << allplayer[ind] << "建设阿夫鲁戴克大坝" << endl;
			water::Afsluitdijkdam();
			break;
		}
		default:
			break;
		}
		this->movpoi();
	}
	case 11://职业技能
	{
		
		if(!carfun(*this))//从头选择的机会
			return;
		this->movpoi();//消耗行动点数
	break; 
	}
	default:
		return;
	break;
	}
	return;
}

void people::special()
{
	string temp1;
	people temp2;
	cout << "输入玩家\n";
	if (isnotplayer(temp1, temp2, people::peoplenum))
		return;
	cout << "输入要使用的卡牌\n";
	cin >> temp1;
	if (temp1 == "cheat")
	{
		cin >> temp1;
		if (temp1 == "infinite")
		{
			water::h20ocube = 1000;
			dam::wholedamnumber = 100;
			district::facnum = 70;
			district::portnum = 70;
		}
		if (temp1 == "complete")
		{
			water::isAfsluitdijkdam = 1;
			water::isdeltaengine = 1;
			water::isstandardengine = 1;
			water::isriverbuffer = 1;
		}
	}
	auto spe = find(temp2.card.begin(), temp2.card.end(), temp1);
	if (spe == temp2.card.end())
	{
		cout << "\n";
		return;
	}
	if (temp1 == "t1" && temp1 == "t2" && temp1 == "t3" && temp1 == "t4" && temp1 == "t5" && temp1 == "t6" && temp1 == "t7" &&
		temp1 == "t8" && temp1 == "t9" && temp1 == "t10" && temp1 == "t11" && temp1 == "t12" && temp1 == "t13" && temp1 == "t14")
	{
		if (temp1 == "t1")
			oceanassociation();
		if (temp1 == "t2")
			exchangeletter();
		if (temp1 == "t3")
			netherlandboy();
		if (temp1 == "t4")
			newport();
		if (temp1 == "t5")
			emergancymeeting();
		if (temp1 == "t6")
			watermonitor();
		if (temp1 == "t7")
			raincome();
		if (temp1 == "t8")
			fixcrack();
		if (temp1 == "t9")
			engineerteam();
		if (temp1 == "t10")
			sandtrick();
		if (temp1 == "t11")
			stormtele();
		if (temp1 == "t12")
			waterengineercomitte();
		if (temp1 == "t13")
			deltaplan();
		if (temp1 == "t14")
			industrialmuseum();
		temp2.card.erase(spe);
	}
	
	
	return;
}

bool portmanager(people& p)//港口管理员
{
	string temp1;
	district temp2;
	diqupanding(p.didian, temp2);
	if (!temp2.port)
	{
		cout << "确定修造码头？\n" << "是否回到主技能面板（按q停止，选择其他地区按其他键）\n";
		cin >> temp1;
		if (temp1 == "q")
			return 0;
		else {
			if(temp2.isportconstruct())
			{ 
				ofstream file("log", ios_base::out | ios_base::app);
				file << allplayer[p.ind] <<"港口管理员在"<<p.didian<<"建设码头" << endl;
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		if (isnotdistrict(temp1, temp2))
			return 0;
		ofstream file("log", ios_base::out | ios_base::app);
		file << allplayer[p.ind] << "港口管理员从" << p.didian << "移动到" <<temp1<< endl;
		p.didian = temp1;
	}
	return 1;
}
bool warehousemanager(people& p)//仓库管理员
{
	string temp1;
	district temp2;
	people temp3;
	diqupanding(p.didian, temp2);
	if (temp2.port == 0)
	{
		cout << "地区已有港口，将返回\n";
		return 0;
	}
	cout << "输入交换卡牌名，将返回\n";
	cin >> temp1;
	auto excard = find(p.card.begin(), p.card.end(), temp1);
	if (excard == p.card.end() && p.card.back() != temp1)
	{
		cout << "并没有该卡牌，将返回\n";
		return 0;
	}
	cout << "输入交给的玩家名\n";
	if (isnotplayer(temp1, temp3,people::peoplenum))
		return 0;
	ofstream file("log", ios_base::out | ios_base::app);
	file << allplayer[p.ind] << "仓库管理员将卡牌" <<*excard << "交给玩家" <<temp1<< endl;
	temp3.card.push_back(*excard);
	p.card.erase(excard);
	return 1;
}
bool monitor(people& p)//主管
{
	bool it;
	string temp1;
	people temp2;
	district temp3;
	do {
		if (isnotplayer(temp1, temp2, people::peoplenum))
			return 0;
		cout << "输入地点\n";
		cin >> temp1;
		diqupanding(temp1, temp3, it);
		if (!it || temp3.waterheight == 0)
		{
			it = 0;
			cout << "错误，地区不存在或地区没有水\n" << "是否回到主技能面板（按q停止，选择其他地区按其他键）\n";
			cin >> temp1;
			if (temp1 == "q")
				return 0;
		}
		else 
		{
			ofstream file("log", ios_base::out | ios_base::app);
			file << allplayer[p.ind] << "主管将" << allplayer[temp2.ind] <<"从"<<temp2.didian<<"调到"<< temp1 << endl;
			temp2.didian = temp1;
		}
		
	}while (it);
	return 1;
}
bool carpenter( people& p)//木匠
{
	cout << "选择建造排水厂（按1）或者建造大坝按（2）或退出（其他）\n";
	bool is;
	string temp1, temp2;
	cin >> temp1;
	if (temp1 != "1" && temp1 != "2")
		return 0;
	else
	{
		if (temp1 == "1")
		{
			district t;
			diqupanding(p.didian, t, is);
			if (t.port == 0)
			{
				t.port = 1;
				--t.portnum;
			}else
			{
				cout << "所在地球已有排水厂，修建大坝（按2）或退出（其他）\n";
					cin >> temp1;
				if (temp1 != "2" )
					return 0;
			}
			p.movpoi();
		}
		if (temp1 == "2")//复制公有的大坝建设
		{
			bool is, it;
			district temp1;
			string temp2;
			int temp3 = 100;
			diqupanding(p.didian, temp1);
			label8:
				cin >> temp2;
				diqupanding(temp2, temp1, is);
				if (is)
				{
					dammatch(p.didian, temp2, it, temp3);
					if (it && !(*damarray[temp3]).damexist())
					{
						(*damarray[temp3]).consdam();
						--(*damarray[temp3]).wholedamnumber;
					}
					else
					{
						cout << "错误，地区不联通或已有大坝\n" << "是否回到主技能面板（按q停止，选择其他地区按其他键）\n";
						cin >> temp2;
						if (temp2 == "q")
							return 0;
						else goto label8;
					}
				}
				else
				{
					cout << "错误，地区不存在\n" << "是否回到主技能面板（按q停止，选择其他地区按其他键）\n";
					cin >> temp2;
					if (temp2 == "q")
						return 0;
					else goto label8;
				}
			
		}
	}
	return 1;
}
bool pumpworker(people& p)//水泵工人
{
	bool it = 0, is = 0;
	do {
		string temp;
		district temp1, temp2;
		cin >> temp;
		diqupanding(p.didian, temp1);
		diqupanding(temp, temp2, is);
		is = is && temp1.pathjudge(temp);
		if (!is)
		{
			cout << "错误，地区不存在或者地区不连通\n" << "是否回到主技能面板（按q停止，选择其他地区按其他键）\n";
			cin >> temp;
			if (temp == "q")
				return 0;
		}else 
		{
			it = temp2.waterheight;
			if (it)
				--temp1.waterheight;//移动成功
			else 
			{
				cout << "水已排空，不需要排水了\n" << "是否回到主技能面板（按q停止，选择其他地区按其他键）\n";
				cin >> temp;
				if (temp == "q")
					return 0;
			}
		}
	} while (is&& it);//失败回头
	return 1;
}
bool waterengineer(people &p)//水利工程师
{
	string temp1;
	district temp2;
	int temp3 = 100;
	diqupanding(p.didian, temp2);
	if (temp2.waterheight != 0)
	{
		cout << "有水，大坝无法建设,将返回主菜单\n";
		return 0;
	}
	if (isnotdistrict(temp1, temp2))
		return 0;
	int newdamsite;//新建大坝坝地址
	if (!isnotdam(p.didian, newdamsite, temp1))
	{
		if (!(*damarray[newdamsite]).damexist())
			(*damarray[newdamsite]).consdam();
		else {
			cout << "地区已有大坝,将返回主菜单\n";
			return 0;
			}
	}else
	{
		cout << "不是临近地区，将返回主菜单\n";
		return 0;
	}
	cout << "已经建成一座坝，按q可以不继续建造\n";
	cin >> temp1;
	if (temp1 == "q")
		return 1;
	if (!isnotdam(p.didian, newdamsite, temp1))//复制代码，两次就不写循环了
	{
		if (!(*damarray[newdamsite]).damexist())
			(*damarray[newdamsite]).consdam();
		else {
			cout << "地区已有大坝,将返回主菜单\n";
			return 0;
		}
	}else
	{
		cout << "不是临近地区，将返回主菜单\n";
		return 0;
	}
	return 1;
}
bool medicalworker(people &p)//卫生工程师
{
	for (auto backcard =decarddistrictcard.begin();backcard!=decarddistrictcard.end();++backcard)
	{
		if (*backcard == p.didian)
		{
			p.card.push_back(*backcard);
			decarddistrictcard.erase(backcard);
		}
	}
	return 1;
}
bool nothing(people& p)
{
	return 0;
}

inline int translate(const string a)
{
	if (a[0] == 'o')
	{
		if (a[1] == '1')
			return 1;
		if (a[1] == '2')
			return 2;
		if (a[1] == '3')
			return 3;
		if (a[1] == '4')
			return 4;
		if (a[1] == '5')
			return 5;
		if (a[1] == '6')
			return 6;
		if (a[1] == '7')
			return 7;
	}
	if (a[0] == 'g')
	{
		if (a[1] == '1')
			return 8;
		if (a[1] == '2')
			return 9;
		if (a[1] == '3')
			return 10;
		if (a[1] == '4')
			return 11;
		if (a[1] == '5')
			return 12;
		if (a[1] == '6')
			return 13;
		if (a[1] == '7')
			return 14;
	}
	if (a[0] == 'y')
	{
		if (a[1] == '8')
			return 15;
		if (a[1] == '2')
			return 16;
		if (a[1] == '3')
			return 17;
		if (a[1] == '4')
			return 18;
		if (a[1] == '5')
			return 19;
		if (a[1] == '6')
			return 20;
		if (a[1] == '7')
			return 21;
	}
	if (a[0] == 'p')
	{
		if (a[1] == '1')
			return 22;
		if (a[1] == '2')
			return 23;
		if (a[1] == '3')
			return 24;
		if (a[1] == '4')
			return 25;
		if (a[1] == '5')
			return 26;
		if (a[1] == '6')
			return 27;
		if (a[1] == '7')
			return 28;
	}
	if (a[0] == 's')
	{
		if (a[1] == '1')
			return 0;
		if (a[1] == '2')
			return 29;
	}
	return 1000;
}
district &district::operator=(const district &tm)
{
	if (this == &tm)
		return *this;
	this->fac = tm.fac;
	this->near = tm.near;
	this->hnear = tm.hnear;
	this->port = tm.port;
	this->waterheight = tm.waterheight;
	
	return *this;
}

bool district::pathjudge(string a)
{
	for (auto i : this->near)
		if (i == a)
			return 1;

	return 0;
}
void dammatch(const string& a, const string& b, bool& is, int &k)
{
	is=0;
	for (int i = 0; i < 62; ++i)
	{
		if ((*damarray[i]).district1 == a)
			if ((*damarray[i]).district2 == b)
				k=i,is = 1;
	}
	for (int i = 0; i < 62; ++i)
	{
		if ((*damarray[i]).district1 == b)
			if ((*damarray[i]).district2 == a)
				k=i,is = 1;
	}
}

bool engineerteam()//工程小队,给玩家3点额外行动点
{
	string temp1;
	people p;
	if (isnotplayer(temp1, p,people::peoplenum))
		return 0;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，工程小队，给" << allplayer[p.ind] << "玩家3点额外行动点" << endl;
	p.movepoin(3);
	return 1;
}
bool emergancymeeting()//紧急会议：移动人到另一个人的地区
{
	string temp1;
	people p1, p2;
	cout << "输入将要移动的人\n";
	if(isnotplayer(temp1,p1, people::peoplenum))
		return 0;
	cout << "输入要到的地方的人\n";
	if (isnotplayer(temp1, p2, people::peoplenum))
		return 0;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，紧急会议，将" << allplayer[p1.ind] << "从" << p1.didian;
	file<< "移动到玩家" << allplayer[p2.ind] << "的地区" <<p2.didian <<endl;
	file.close();
	p1.didian = p2.didian;
	cout << "成功移动\n";
	return 1;
}
bool industrialmuseum()//工业博物馆:任意一地区放置一排水厂一大坝（无视是否有水）
{
	string temp1,temp3;
	district temp2;
	int newdamsite;
	cout << "注意，该牌不检查输入地区排水厂存在与否\n";
	if (isnotdistrict(temp1, temp2))
		return 0;
	if (isnotdam(temp1, newdamsite, temp3))
		return 0;
	if ((*damarray[newdamsite]).damexist())
	{
		cout << "大坝已存在，按q退出，否则默认不建设大坝\n";
		cin >> temp1;
		if(temp1=="q")
			return 0;
	}
	if (!temp2.isfacconstruct())
		return 0;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，工业博物馆，在"<<temp1<< "地区建设排水厂，在" << temp3<<"之间建设大坝"<<endl;
	file.close();
	(*damarray[newdamsite]).consdam();
	return 1;
}
bool waterengineercomitte()//特殊卡牌：水利委员会
{
	string temp1;
	district temp2;
	for (int i = 0; i < 3; ++i)
	{
		label:if (isnotdistrict(temp1, temp2))
			return 0;
		if (temp2.waterheight == 0)
		{
			cout << "地区无水,可以按q提前退出\n";
			cin >> temp1;
			if (temp1 == "q")
				return 0;
			goto label;
		}
		ofstream file("log", ios_base::out | ios_base::app);
		file << "特殊卡牌，工业博物馆，在" << temp1 << "地区排除一格水"<<endl;
		temp2.waterheight -= 1;
		--water::h20ocube;
	}
	return 1;
}
bool deltaplan()//特殊卡牌：三角洲计划
{
	string temp1, temp2;
	int newdamsite;
	for(int i=0;i<3;++i)
	{
		label:if (isnotdam(temp1, temp2, newdamsite))
			return 0;
		if((*damarray[newdamsite]).damexist())
			{
				cout << "大坝已存在,可以按q提前退出\n";
				cin >> temp1;
				if (temp1 == "q")
					return 0;
				goto label;
			}
		(*damarray[newdamsite]).consdam();
		ofstream file("log", ios_base::out | ios_base::app);
		file << "特殊卡牌，三角洲计划，在" << (*damarray[newdamsite]).district1 << "与";
		file<< (*damarray[newdamsite]).district2 << "之间修筑大坝" << endl;
	}
	return 1;
}
bool newport()//特殊卡牌：新港口
{
	string temp1, temp3;
	district temp2;
	int newdamsite;
	cout << "注意，该牌不检查输入地区码头存在与否\n";
	if(isnotdistrict(temp1,temp2,1))
	if (isnotdam(temp1, newdamsite, temp3))
		return 0;
	if ((*damarray[newdamsite]).damexist())
	{
		cout << "大坝已存在，按q退出，否则默认不建设大坝\n";
		cin >> temp1;
		if (temp1 == "q")
			return 0;
	}
	if(!temp2.isportconstruct())
	{
		return 0;
	}
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，新港口，在" << temp1 << "地区建设码头，在" << temp3 << "之间建设大坝" << endl;
	(*damarray[newdamsite]).consdam();
	return 1;
}
bool exchangeletter()//特殊卡牌:信件交换:任意两玩家交换各自一手牌
{exletter_1:
	string temp1,temp2;
	people temp3, temp4;
	if (isnotplayer(temp1, temp3, people::peoplenum))
		return 0;
	if (isnotplayer(temp1, temp4, people::peoplenum))
		return 0;
	if (temp1 == temp2)
	{
		cout << "必须是不同玩家\n";
		goto exletter_1;
	}
exletter1:
		cout << "输入第一位玩家要交换的卡牌\n";
		cin >> temp1;
		auto excard1 = find(temp3.card.begin(), temp3.card.end(),temp1);
		if (excard1 == temp3.card.end() && temp3.card.back() != temp1)
		{
			cout << "并没有该卡牌，按q将返回\n";
			cin >> temp1;
			if (temp1 == "q")
				return 0;
			goto exletter1;
		}

exletter2:
	cout << "输入第二位玩家要交换的卡牌\n";
	cin >> temp2;
	auto excard2 = find(temp4.card.begin(), temp4.card.end(), temp2);
	if (excard2 == temp4.card.end() && temp4.card.back() != temp2)
	{
		cout << "并没有该卡牌，按q将返回\n";
		cin >> temp2;
		if (temp2== "q")
			return 0;
		goto exletter2;
	}
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，信件交换" << endl;
	file << allplayer[temp3.ind] << "将手牌" << *excard1 << "给玩家" << allplayer[temp4.ind] << endl;
	file << allplayer[temp4.ind] << "将手牌" << *excard2 << "给玩家" << allplayer[temp3.ind] << endl;
	temp3.card.push_back(*excard2);
	temp4.card.push_back(*excard1);
	temp3.card.erase(excard1);
	temp4.card.erase(excard2);
	return 1;
}
bool stormtele()//特殊卡牌：暴风电报
{
	string temp1;
	people temp2,temp3, temp4;
	cout << "输入交出手牌的玩家\n";
	if (isnotplayer(temp1, temp2, people::peoplenum))
		return 0;
sttele_1:
	cout << "输入交出手牌的玩家要交换的卡牌\n";
	cin >> temp1;
	auto excard1 = find(temp2.card.begin(), temp2.card.end(), temp1);
	if (excard1 == temp2.card.end() && temp2.card.back() != temp1)
	{
		cout << "并没有该卡牌，按q将返回\n";
		cin >> temp1;
		if (temp1 == "q")
			return 0;
		goto sttele_1;
	}
	cout << "输入收到手牌的第一个玩家\n";
	if (isnotplayer(temp1, temp3, people::peoplenum))
		return 0;
	cout << "是否继续交付手牌，按q停止交付并推出\n";
	cin >> temp1;
	if (temp1 == "q")
	{
		ofstream file("log", ios_base::out | ios_base::app);
		file << "特殊卡牌，暴风电报" << endl;
		file << allplayer[temp2.ind] << "将手牌" << *excard1 << "给玩家" << allplayer[temp3.ind] << endl;
		file.close();
		temp3.card.push_back(*excard1);
		temp2.card.erase(excard1);
		return 1;
	}
sttele_2:
	cout << "输入交出手牌的玩家要交换的卡牌\n";
	cin >> temp1;
	auto excard2 = find(temp2.card.begin(), temp2.card.end(), temp1);
	if (excard2 == temp2.card.end() && temp2.card.back() != temp1)
	{
		cout << "并没有该卡牌，按q将返回\n";
		cin >> temp1;
		if (temp1 == "q")
			return 0;
		goto sttele_2;
	}
	cout << "输入收到手牌的第二个玩家\n";
	if (isnotplayer(temp1, temp4, people::peoplenum))
		return 0;
	ofstream file;
	file.open("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，暴风电报" << endl;
	file << allplayer[temp2.ind] << "将手牌" << *excard1 << "给玩家" << allplayer[temp3.ind] << endl;
	file << allplayer[temp2.ind] << "将手牌" << *excard2 << "给玩家" << allplayer[temp4.ind] << endl;
	file.close();
	temp3.card.push_back(*excard1);
	temp4.card.push_back(*excard2);
	temp2.card.erase(excard1);
	temp2.card.erase(excard2);
	return 1;
}
bool fixcrack()//特殊卡牌：堵住裂缝
{
	string temp1;
	people temp2;
	if (isnotplayer(temp1, temp2, people::peoplenum))
		return 0;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，堵住裂缝" << endl;
	for (int i = 0; i < 61; ++i)
	{
		if ((*damarray[i]).district1 == temp2.didian || (*damarray[i]).district2 == temp2.didian)
			file << " 在" << allplayer[temp2.ind] <<"身边的"<< (*damarray[i]).district1 << "和" << (*damarray[i]).district2 << "建造大坝" << endl;
		(*damarray[i]).consdam();
	}
	return 1;
}
bool netherlandboy()//特殊卡牌：荷兰男孩
{
	string temp1;
	district temp2;
	cout << "输入本回合要保护的免受洪水地区\n";
	if (isnotdistrict(temp1, temp2))
		return 0;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，荷兰男孩,保护" <<temp1<<"本回合不受洪水"<< endl;
	water::protec = translate(temp1);
	return 1;
}
bool oceanassociation()//特殊卡牌：海洋协会,移动任意一玩家到与海洋临近地区
{
	string temp1;
	people temp2;
	int temp3;
	bool is;
	do
	{
		cout << "要移动到的输入临海地区\n";
		cin >> temp1;
		temp3 = translate(temp1);
		is = (temp3 >= 1 && temp3 <= 7 && temp3 != 3) || (temp3 >= 21 && temp3 <= 28);
		if (!is)
		{
			cout << "输入错误，按q退出\n";
			cin >> temp1;
			if (temp1 == "q")
				return 0;
		}
	} while (!is);
	cout << "输入要移动的人\n";
	
	if (isnotplayer(temp1, temp2, people::peoplenum))
		return 0;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，海洋协会,将" << allplayer[temp2.ind]<< "移动到临海地区"<< travelsal[temp3] << endl;
	temp2.didian = travelsal[temp3];
	return 1;
}
bool sandtrick()//特殊卡牌：沙袋战术:跳过本回合浪潮侵袭判定
{
	string temp1;
	cout << "按q退出\n";
	cin >> temp1;
	if (temp1 == "q")
		return 0;
	water::protec = 500;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，沙袋战术" << endl;
	return 1;
}
bool watermonitor()//特殊卡牌：用水管理:合法下移动任意三个水方块
{
	string temp1;
	district temp2;
	deque<district> out;
	deque<district> in;
	for (int i = 0; i < 3; ++i)
	{
		cout << "输入要移除水的地区\n";
		if(isnotdistrict(temp1, temp2) || temp2.waterheight == 0)
		{
			cout << "地区错误或者地区没有水，按q退出\n";
			cin >> temp1;
			if (temp1 == "q")
				return 0;
		}
		out.push_back(temp2);
		cout << "输入要移入水的地区\n";
		if (isnotdistrict(temp1, temp2) || temp2.waterheight == 3)
		{
			cout << "地区错误或者地区已有3格水，按q退出\n";
			cin >> temp1;
			if (temp1 == "q")
				return 0;
		}
		in.push_back(temp2);
	}
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，用水管理" << endl;
	for (int i = 0; i < in.size(); ++i)
	{
		--out[i].waterheight;
		++in[i].waterheight;
		file << "从" << travelsal[out[i].index] << "移动一格水方块到" << travelsal[in[i].index] << endl;
	}
	return 1;
}
bool raincome()//特殊卡牌：风雨将至,将浪潮牌系统中的顶部五张牌中的所有风暴牌置于牌堆顶，其他顺序不变
{
	auto n = tidalcard.size()>5?5: tidalcard.size();
	deque<string> ordi;
	vector<string> storm;
	string temp1;
	for (int i = 0; i < n; ++i)
	{
		temp1 = tidalcard.back();
		
		if (temp1[0]=='s')
			storm.push_back(temp1);
		else
			ordi.push_front(temp1);
		tidalcard.pop_back();
	}
	cout << "其中非风暴牌有\n";
	for (int i = 0;i < ordi.size(); ++i)
	{
		cout << ordi[i];
		tidalcard.push_back(ordi[i]);
	}
	cout << endl;
	for (auto i : storm)
		tidalcard.push_back(i);
	ordi.clear();
	storm.clear();
	ofstream file("log", ios_base::out | ios_base::app);
	file << "特殊卡牌，风雨将至" << endl;
	return 1;
}
inline bool isnotdistrict(string& a, district& c)
{
	bool is = 0;
	do {
		cout << "输入地区名\n";
		cin >> a;
		diqupanding(a, c, is);
		if (!is)
		{
			cout << "错误，地区不存在\n" << "是否返回（按q停止，选择其他地区按其他键）\n";
			cin >> a;
			if (a == "q")
				return 1;
		}
	} while (!is);
	return 0;
}
inline bool isnotdistrict(string& a, district& c,bool mode)
{
	bool is = 0;
	do {
		cout << "输入地区名\n";
		cin >> a;
		diqupanding(a, c, is);
		is = mode ? is && !c.port : is && !c.fac;
		if (!is)
		{
			cout << "错误，地区不存在或者是没有";
			if (mode)
				cout << "码头";
			else
				cout << "排水厂";
			cout<< "是否返回（按q停止，选择其他地区按其他键）\n";
			cin >> a;
			if (a == "q")
				return 1;
		}
	} while (!is);
	return 0;
}

inline bool isnotdam(const string& a, int& k, string& b)//固定某地区版本
{
	district temp;
	bool is = 0;
	do {
		cout << "输入大坝间隔的另一个地区名\n";
		if(isnotdistrict(b, temp))
			return 1;
		dammatch(a, b, is, k);
		if (!is)
		{
			cout << "错误，大坝匹配错误\n" << "是否返回（按q停止，选择其他玩家按其他键）\n";
			cin >> b;
			if (b == "q")
				return 1;
		}
	} while (!is);
	return 0;
}
inline bool isnotdam(string& a, string& b, int& k)//双重输入版本
{
	district temp;
	if (isnotdistrict(a, temp))
		return 1;
	return isnotdam(a, k, b) ? 1 : 0;//继承
}

void stormcome()//暴风来袭实现
{
	water::waterlevel++;
	drawandtide(3);
	tidalcard = tidalcard+desertcard;
	vector<string> temp;
	desertcard.swap(temp);
	desertcard.clear();
	temp.clear();
}


void water::riverbuffer(int set )//河流缓冲带:绿色大地区排除至多6个（默认值）水方块
{
	isriverbuffer = 1;
	string temp1;
	district temp2;
	for (int i = 0; i < set; ++i)
	{labelstdam:
		while (!isnotdistrict(temp1, temp2) || temp1[0] != 'g')//先判定是否地区，再判定是否为绿色
			cout << "地区输入有误\n";//不用if，后面也能退出
		if (temp2.waterheight == 0)
		{
			cout << "地区无水，请重新输入\n";
			cout << "是否提前退出？(按q退出)\n";
			cin >> temp1;
			if (temp1 == "q")
				return;
			goto labelstdam;
		}
		--temp2.waterheight;
		cout << "是否提前退出？(按q退出)\n";
		cin >> temp1;
		if (temp1 == "q")
			return;
	}
	ofstream file("log", ios_base::out | ios_base::app);
	file << "河流缓冲带 建设成功" << endl;
}
void water::standardengine(int set )//标准化工程:黄色大地区放置至多4个（默认值）大坝
{
	isstandardengine = 1;
	string temp1,temp3;
	district temp2;
	int newdamsite;
	for (int i = 0; i < set; ++i)
	{
		cout << "请先输入黄色地区名字\n";
		while(!isnotdistrict(temp1, temp2)&&temp1[0]=='y')
			cout << "请正确输入输入黄色地区名字!\n";
		cout << "\n";
		stadegi:while (isnotdam(temp1, newdamsite, temp3))
			cout << "请正确输入合适的大坝\n";
		if ((*damarray[newdamsite]).damexist())
		{
			cout << "该大坝已存在，按q停止修坝，按c重新选择大坝，其他键无视之\n";
			cin >> temp3;
			if (temp3 == "q")
				return;
			if (temp3 == "c")
				goto stadegi;
		}
		(*damarray[newdamsite]).consdam();
		if (i != set - 1)
		{
			cout << "是否停止修坝，按q退出\n";
			cin >> temp3;
			{
				return;
			}
		}
	}
	ofstream file("log", ios_base::out | ios_base::app);
	file << "标准化工程 建设成功" << endl;
}
void water::deltaengine()//三角洲工程
{
	int newdamsite;
	bool nonsnes;
	for (int i = 1; i != 7; ++i)
	{
		if (i != 3)
		{
			dammatch("s1", travelsal[i], nonsnes, newdamsite);
			(*damarray[newdamsite]).consdam();
		}
	}
	isdeltaengine = 1;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "三角洲工程 建设成功" << endl;
}
void water::Afsluitdijkdam()//
{
	isAfsluitdijkdam = 1;
	ofstream file("log", ios_base::out | ios_base::app);
	file << "阿夫鲁戴克大坝 建设成功" << endl;
}
bool water::issuccess()
{
	if (isriverbuffer == 1 && isAfsluitdijkdam == 1 && isstandardengine == 1 && isdeltaengine == 1)
		return 1;
	else
		return 0;
}
bool water::isfail()
{
	if (water::h20ocube < 0)
		return 1;
	if (districtcard.size() < 0)
		return 1;
	return 0;
}

void display( )
{
	int mode=1;
	do {
		cin.sync();   //清空流
		cin.clear();  //清除流错误标记
		cin >> mode;      //cin输入到int i，类型不符，超长将设置cin.fail为true
		if (cin.fail() || mode > 6 || mode < 2)
			cout << "输入错误，请重新输入" << endl; //出错显示信息
	} while (cin.fail() || mode > 6 || mode < 2);
	switch (mode)
	{
	case 1:{
		district showarea;
		for (int i = 0; i < 30; ++i)
		{
			diqupanding(travelsal[i], showarea);
			cout << travelsal[i] << "水位" << showarea.waterheight << " 排水厂" << showarea.fac << " 码头" << showarea.port << endl;
		}
		break;
	}
	case 2:
	{
		for (int i = 0; i < people::peoplenum; ++i)
		{
			cout << "player" << i << " 职业" << players[i].career << "地点" << players[i].didian << "\n";
			cout << "手牌\n";
			for (auto j : players[i].card)
				cout << j;
		}
		break;
	}
	case 3:
	{
		for (int i = 0; i < 62; ++i)
		{
			cout << (*damarray[i]).district1 << "之间的大坝 " << (*damarray[i]).district2;
		}
		cout << "\n";
		break;
	}
	case 4:
	{
		cout << "剩余大坝 " << dam::wholedamnumber << " 剩余排水厂 " << district::facnum << " 剩余码头 " << district::portnum << endl;
		cout << "剩余水方块" << water::h20ocube << " 水位 "<<water::waterlevel<<"水位等级" << water::oceanheight() << endl;
	}
	default:
		break;
	}
}


inline void diqupanding(string& a, district& c)
{
	tolower(a[0]);
	if (a[0] == 'o')
	{
		if (a[1] == '1')
			c = o1;
		if (a[1] == '2')
			c = o2;
		if (a[1] == '3')
			c = o3;
		if (a[1] == '4')
			c = o4;
		if (a[1] == '5')
			c = o5;
		if (a[1] == '6')
			c = o6;
		if (a[1] == '7')
			c = o7;
	}
	if (a[0] == 'p')
	{
		if (a[1] == '1')
			c = p1;
		if (a[1] == '2')
			c = p2;
		if (a[1] == '3')
			c = p3;
		if (a[1] == '4')
			c = p4;
		if (a[1] == '5')
			c = p5;
		if (a[1] == '6')
			c = p6;
		if (a[1] == '7')
			c = p7;
	}
	if (a[0] == 'y')
	{
		if (a[1] == '1')
			c = y8;
		if (a[1] == '2')
			c = y2;
		if (a[1] == '3')
			c = y3;
		if (a[1] == '4')
			c = y4;
		if (a[1] == '5')
			c = y5;
		if (a[1] == '6')
			c = y6;
		if (a[1] == '7')
			c = y7;
	}
	if (a[0] == 'g')
	{
		if (a[1] == '1')
			c = g1;
		if (a[1] == '2')
			c = g2;
		if (a[1] == '3')
			c = g3;
		if (a[1] == '4')
			c = g4;
		if (a[1] == '5')
			c = g5;
		if (a[1] == '6')
			c = g6;
		if (a[1] == '7')
			c = g7;
	}
	if (a[0] == 'h')
	{
		if (a[1] == '1')
			c = h1;
		if (a[1] == '2')
			c = h2;
		if (a[1] == '3')
			c = h3;
		if (a[1] == '4')
			c = h4;
		if (a[1] == '5')
			c = h5;
		if (a[1] == '6')
			c = h6;
	}
	if (water::isAfsluitdijkdam)
		if (a == "s2")
			c = s2;
}
inline void diqupanding(string & a, district & c, bool& i)
{
	tolower(a[0]);
	i = 0;
	if (a[0] == 'o')
	{
		if (a[1] == '1')
			i = 1, c = o1;
		if (a[1] == '2')
			i = 1, c = o2;
		if (a[1] == '3')
			i = 1, c = o3;
		if (a[1] == '4')
			i = 1, c = o4;
		if (a[1] == '5')
			i = 1, c = o5;
		if (a[1] == '6')
			i = 1, c = o6;
		if (a[1] == '7')
			i = 1, c = o7;
	}
	if (a[0] == 'p')
	{
		if (a[1] == '1')
			i = 1, c = p1;
		if (a[1] == '2')
			i = 1, c = p2;
		if (a[1] == '3')
			i = 1, c = p3;
		if (a[1] == '4')
			i = 1, c = p4;
		if (a[1] == '5')
			i = 1, c = p5;
		if (a[1] == '6')
			i = 1, c = p6;
		if (a[1] == '7')
			i = 1, c = p7;
	}
	if (a[0] == 'y')
	{
		if (a[1] == '1')
			i = 1, c = y8;
		if (a[1] == '2')
			i = 1, c = y2;
		if (a[1] == '3')
			i = 1, c = y3;
		if (a[1] == '4')
			i = 1, c = y4;
		if (a[1] == '5')
			i = 1, c = y5;
		if (a[1] == '6')
			i = 1, c = y6;
		if (a[1] == '7')
			i = 1, c = y7;
	}
	if (a[0] == 'g')
	{
		if (a[1] == '1')
			i = 1, c = g1;
		if (a[1] == '2')
			i = 1, c = g2;
		if (a[1] == '3')
			i = 1, c = g3;
		if (a[1] == '4')
			i = 1, c = g4;
		if (a[1] == '5')
			i = 1, c = g5;
		if (a[1] == '6')
			i = 1, c = g6;
		if (a[1] == '7')
			i = 1, c = g7;
	}
	if (a[0] == 'h')
	{
		if (a[1] == '1')
			i = 1, c = h1;
		if (a[1] == '2')
			i = 1, c = h2;
		if (a[1] == '3')
			i = 1, c = h3;
		if (a[1] == '4')
			i = 1, c = h4;
		if (a[1] == '5')
			i = 1, c = h5;
		if (a[1] == '6')
			i = 1, c = h6;
	}
	if (water::isAfsluitdijkdam)
		if (a == "s2")
			i = 1, c = s2;
}
inline void renpanding(string & a, people & c, bool& i, const int& k)
{
	i = 0;
	if (a == "1")
		i = 1, c = player1;
	if (a == "2")
		i = 1, c = player2;
	if (a == "3" && k >= 3)
		i = 1, c = player3;
	if (a == "4" && k >= 4)
		i = 1, c = player4;
	if (a == "5" && k >= 5)
		i = 1, c = player5;
}
inline bool isnotplayer(string & a, people & c, const int& k)
{
	bool is = 0;
	do {
		cout << "输入玩家名（按1，2，3，4，5，注意不要超出总人数）\n";
		cin >> a;
		renpanding(a, c, is, k);
		if (!is)
		{
			cout << "错误，玩家不存在\n" << "是否返回（按q停止，选择其他玩家按其他键）\n";
			cin >> a;
			if (a == "q")
				return 1;
		}
	} while (is);
	return 0;
}