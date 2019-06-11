#pragma once
#ifndef WATER_H
#define WATER_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>  
#include <list>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <functional>
#include <ctime>
#include <sstream>
using namespace std;


class district
{
public:
	static int portnum;
	static int facnum;
	int waterheight;
    char stricname;
	int index;
	vector <string> near;//人的行动
	vector <string> hnear;//水的行动
	bool port;  //港口
	bool fac;   //排水厂
	bool isportconstruct();
	bool isfacconstruct();
    district(char a, int n, vector <string> ne, vector <string> hne,int id) :stricname(a), waterheight(n), port(0), fac(0)
	{
		near = ne;
		hnear = hne;
		index = id;
	}
	district(const district& t) :waterheight(t.waterheight), stricname(t.stricname), port(t.port), fac(t.fac), near(t.near), hnear(t.hnear)
	{
		index = t.index;
	}
	district() = default;
	district &operator =(const district &tm);
	bool pathjudge(string a);
};
class people
{
	friend bool engineerteam();
int movepoint;
public: 
	static int peoplenum;
	static void special();
	int career;
	int ind;
	people(int n):ind(n) {  }
	people() =default;
	void renew() {
		movepoint = 4;
	}
	bool movepjudgu();
	
	
	void move(const int & b);
	list<string>card;//卡牌
	string didian;
	void movpoi();
	void movepoin(int n);
	
};
class water
{
friend class Afsluitdijkdam;
friend bool netherlandboy();
friend bool sandtrick();
friend void people::special();
friend inline void diqupanding(string& a, district& c, bool& i);
friend inline void diqupanding(string& a, district& c);

    static int protec;
	static bool isstandardengine;
	static bool isriverbuffer;
	static bool isdeltaengine;
	static bool isAfsluitdijkdam;
	static void setwetpath();//重置wetpath
public:
	static void setbegin();
	static int h20ocube;
	static int waterlevel;
	static int oceanheight();
	static void standardengine(int set = 4);//标准化工程：黄色大地区放置至多4个（默认值）大坝
	static void riverbuffer(int set = 6);//河流缓冲带:绿色大地区排除至多6个（默认值）水方块
	static void deltaengine();//三角洲工程
	static void Afsluitdijkdam();//阿夫鲁戴克大坝
	static bool issuccess();
	static bool isfail();
	static void waterflow();
	static void inundation(const string & orign);
	static void renew();//更新荷兰男孩
	static void drain();
};
class dam
{
public:
	string district1;//连接的
	string district2;
	static int wholedamnumber;
	virtual void consdam() = 0;
	virtual void destdam() = 0;
	virtual bool damexist() = 0;
	virtual bool damempty() = 0;
	void calltodestory();
};
class doubledam :public dam
{
public:
	virtual void consdam();
	virtual void destdam();
	virtual bool damexist();
	virtual bool damempty();
	doubledam(const string& a, const string& b, const int& c)
	{
		district1 = a;
		district2 = b;
		damnum = c;
	}
private:
	int damnum;
};
class singledam :public dam
{
public:
	virtual void consdam();
	virtual void destdam();
	virtual bool damexist();
	virtual bool damempty();
	singledam(const string &a, const string& b, const bool& c)
	{
		district1 = a;
		district2 = b;
		isdam = c;
	}
private:
	bool isdam;//是否有坝
	
};
class Afsluitdijkdam :public dam
{
public:
	virtual void consdam();
	virtual void destdam();
	virtual bool damexist();
	virtual bool damempty();
	Afsluitdijkdam(const string& a, const string& b)
	{
		district1 = a;
		district2 = b;
	}
};
void drawandtide(int n =1);//浪潮侵袭
//template<class t>
//void cardshuffle(vector<t> arr);//洗牌函数

bool portmanager( people& p);//港口管理员
bool warehousemanager( people& p);//仓库管理员
bool monitor( people& p);//主管
bool carpenter( people& p);//木匠
bool pumpworker(people& p);//水泵工人
bool waterengineer( people& p);//水利工程师
bool medicalworker( people& p);//卫生工程师
bool nothing(people& p);

bool oceanassociation();//特殊卡牌：海洋协会
bool netherlandboy();//特殊卡牌：荷兰男孩
bool newport();//特殊卡牌：新港口
bool exchangeletter();//特殊卡牌:交换信件:任意两玩家交换各自一手牌
bool emergancymeeting();//特殊卡牌：紧急会议
bool engineerteam();//特殊卡牌：工程小队
bool raincome();//特殊卡牌：风雨将至	将浪潮牌系统中的顶部五张牌中的所有风暴牌置于牌堆顶，其他顺序不变
bool sandtrick();//特殊卡牌：沙袋战术:跳过本回合浪潮侵袭判定
bool stormtele();//特殊卡牌：暴风电报
bool waterengineercomitte();//特殊卡牌：水利委员会
bool deltaplan();//特殊卡牌：三角洲计划
bool industrialmuseum();//特殊卡牌：工业博物馆	任意一地区放置一排水厂一大坝（无视是否有水）
bool watermonitor();//特殊卡牌：用水管理:合法下移动任意三个水方块
bool fixcrack();//特殊卡牌：堵住裂缝



inline void diqupanding(string& a, district& c, bool& i);
inline void diqupanding(string& a, district& c);
inline bool isnotdistrict(string& a, district& c);//地区快速判定
inline bool isnotdistrict(string& a, district& c, bool mode);//港口或排水厂

inline void renpanding(string& a, people& c, bool& i, const int& k);
inline bool isnotplayer(string& a, people& c, const int& k);//人员快速判定

inline bool isnotdam(const string& a, int& k, string& b);//大坝快速判定,固定某地区版本
inline bool isnotdam(string& a, string& b, int& k);//大坝快速判定
void dammatch(const string& a, const string& b, bool& is, int& k);

inline int translate(const string a);


//inline void tidecome(string hitarea, int n = 1);

void display();
template <class t>
vector<t>& operator+(vector<t>& a, vector<t>& b);

bool bfs_chain(const string a, const string b);



void stormcome();//风暴牌效果

double random(double start, double end);




#endif//WATER_H
