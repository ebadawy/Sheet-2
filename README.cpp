Sheet-2
=======
//Programming Exercises
// 1
void sort2(int& a,int& b)
{
  if ( a > b )
	{
		int temp = a ;
		a = b ;
		b = temp;
}
}

int main ()

{
int u = 2;
int v = 3;
int w = 4;
int x = 1;
sort2(u, v);
sort2(w, x);

cout << "u : " << u <<  endl << "v : " << v << endl << "w : " << w << endl << "x : " << x << endl;
}
//2
void sort3(int& a,int& b , int& c)
{

		int temp = a ;
		int temp2 = b ;
		a = c;
		b = temp;
		c = temp2;

}

int main ()

{
int v = 3;
int w = 4;
int x = 1;
sort3(v,w,x);
cout << "v : " << v << endl<< "w : " << w << endl << "x : " << x << endl;
}
//3
double sphere_volume(double r)
{
	return ((4/3)*3.14*r*r*r);
}
double sphere_surface(double r)
{
	return (4 * 3.14 * r*r);
}
double cylinder_volume(double r, double h)
{
	return (3.14 * r * r * h);
}
double cylinder_surface(double r, double h)
{
	return (2 * 3.14 * r * h);
}
double cone_volume(double r, double h)
{
	return ((1/3) * 3.14 * r * r * h);
}
double cone_surface(double r, double h)
{
	return ((3.14 * r * r)+ (3.14 * r * h));
}
//4
double get_double(string str)
{
	cout << str ;
	double p;
	cin >> p;
	if ( cin.fail())
		exit(1);

	return p;
}

int main()
{
	
	double salary = get_double("Please enter your salary:");
	cout << "salary:" << salary << endl;

	double perc_raise =get_double("What percentage raise would you like?");
	cout << "percentage raise:" << perc_raise << endl << endl;
	return 0;
}
//5
bool ckeckLeapYear (int x)
{
	if ( x % 400 == 0)
		return true;
	if ( x % 100 == 0)
		return false;
	if ( x % 4 == 0)
		return true;
	return false;
}
//8
void display_H(Point p)
{
	float px = p.get_x();
	float py = p.get_y();

	cwin << Line ( p , Point (px , (py - 1)));
	cwin << Line ( Point (px ,( py -.5)) , Point (px +1 , (py -.5)));
	cwin << Line ( Point ((px +1) , py) , Point ((px + 1) , (py - 1)));
}
void display_E(Point p)
{
	float px = p.get_x();
	float py = p.get_y();

	cwin << Line ( p , Point (px+1 , py));
	cwin << Line ( p , Point (px , py -1));
	cwin << Line ( Point ( px , py-.5 ), Point (px+1 , py-.5));
	cwin << Line (Point ( px , py -1 ) , Point (px +1 , py-1));
}
void display_L(Point p)
{
	float px = p.get_x();
	float py = p.get_y();

	cwin << Line (p , Point ( px , py-1));
	cwin << Line (Point (px , py -1 ), Point (px+1 , py-1));
}
void display_O(Point p)
{
	float px = p.get_x();
	float py = p.get_y();

	cwin << Circle ( Point (px+.5 , py-.5) , .5);
}

void drawHELLO(void)
{
	display_H(Point(-9   , 9));
	display_E(Point(-7.9 , 9));
	display_L(Point(-6.8 , 9));
	display_L(Point(-5.7 , 9));
	display_O(Point(-4.6 , 9));
}

void drawHELO(void)
{
	display_H(Point(-9   , 7));
	display_E(Point(-7.9 , 7));
	display_L(Point(-6.8 , 7));
	display_O(Point(-5.7 , 7));
}
int ccc_win_main()
{
	drawHELLO();
	drawHELO();
	return 0;
}
//9
class Person
{
private:
	string name;
	int age;

public:
	 Person()
	{
	name = "";
	age  = 0;
	}
	 Person(string pname, int page)
	{
	 name = pname;
	 age = page;
	}
	string get_name() const
	{
	 return name;
	}
	int get_age() const
	{
	 return age;
	}
};
//10
class Country
{
private:
	string countryName;
	int pop;
	int area;

public:
	Country()
		{
	countryName="";
	pop = 0;
	area = 0;
		}	
	Country(string name, int ppop , int parea);
	int getArea (void) const
	{
		return area;
	}
	int getPop(void) const
	{
		return pop;
	}
	void setName(string counName)
	{
		countryName = counName;
	}
	void setPop(int newPop)
	{
		pop = newPop;
	}
	void setArea(int newArea)
	{
		area = newArea;
	}
};

Country::Country(string name, int ppop , int parea)
{
	countryName = name;
	pop = ppop;
	area = parea;
}

int maxPop(Country c[] , int sz)
{
	
	int max = 0;
	for (int i = 0 ; i < sz ; i++)
	{
		if (c[i].getPop() > max )
			max = c[i].getPop();
	}
	return max;
}
int maxArea(Country c[] , int sz)
{
	int max = 0;
	for (int i = 0 ; i < sz ; i++)
	{
		if (c[i].getArea() > max )
			max = c[i].getArea();
	}
	return max;
}
int maxPArea(Country c[] , int sz)
{
	int max = 0;
	for (int i = 0 ; i < sz ; i++)
	{
		if (c[i].getPop() / c[i].getArea() > max )
			max = c[i].getPop() / c[i].getArea();
	}
	return max;
}
int main()
{
	string name[3];
	int pop[3] , area[3];
	Country c[3] ;
	for ( int i = 1 ; i <= 3 ; i++)
	{
		cout << i << "-\n" ;
		cout << "Enter country name : ";
		getline(cin, name[i]);
		cout << "Enter country population : ";
		cin >> pop[i];
		cout << "Enter Country area : ";
		cin >> area[i];
		c[i].setName(name[i]);
		c[i].setPop(pop[i]);
		c[i].setArea(area[i]);
	}
	cout << "max area: "<< maxArea(c , 3)<< endl;
	cout << "max population: "<< maxPop(c , 3)<< endl;
	cout << "max population density: "<< maxPArea(c,3)<<endl;


	return 0;
}
//11

class Message
{
private:
	string rec;
	string sen;
	string mestext;
	

public:
	Message(string recipient , string sender);
	void textMessage(string TextMessage);
	string to_string(void);
	};

Message::Message(string recipient , string sender)
{
	rec = recipient;
	sen = sender;
}
void Message::textMessage(string TextMessage)
{
	mestext = TextMessage;
}

string Message::to_string(void)
{
	Time t = Time();
	stringstream stm;
	stm << "\nfrom: " << sen << "\nTo: "<< rec <<"\nTime: "<<t.get_hours()<<":"<<t.get_minutes()<<":"<<t.get_seconds()<<"\nMessage :"<< mestext<<endl;
	
	return stm.str();
}

int main()
{
	cout << "Sender :";
	string sender;
	getline(cin , sender);
	cout << "To :";
	string rec;
	getline (cin , rec);
	cout << "Message :";
	string mes;
	getline(cin , mes);
	Message m(rec , sender);
	m.textMessage(mes);
	cout << m.to_string()<<endl;
	return 0;
}
//12
class Rectangle
{
private:
	Point p1;
	Point p2;
	
public:
	Rectangle()
	{
	p1 = Point (0,0);
	p2 = Point (0,0);
	}
	Rectangle(Point p_1 , Point p_2)
	{
	p1 = p_1;
	p2 = p_2;
	}
	void plot()
	{
		int xp1 = p1.get_x();
		int yp1 = p1.get_y();
		int xp2 = p2.get_x();
		int yp2 = p2.get_y();
		cwin << Line ( p1 , Point(xp1,yp2));
		cwin << Line ( p1 , Point(xp2,yp1));
		cwin << Line ( p2 , Point(xp1,yp2));
		cwin << Line ( p2 , Point(xp2,yp1));
	}
	void move(int dx , int dy)
	{
		int xp1 = dx + p1.get_x();
		int yp1 = dy + p1.get_y();
		p1 = Point (xp1 , yp1);
		int xp2 = dx + p2.get_x();
		int yp2 = dy + p2.get_y();
		p2 = Point (xp2 , yp2);
		void plot();
	}
};



int ccc_win_main()
{
	Rectangle c (Point (2,2) , Point (1,1));
	c.plot();
	
	return 0;
}
//13
int main()
{
	int players[11];
	for (int i=0 ; i < 11 ; i++)
	{
		cout << "player's " << i+1 << " age :";
		cin >> players[i];
	}
	float sum = 0;
	for (int i=0 ; i < 11 ; i++)
	{
		sum +=players[i];
	}
	cout << "player's avarage age is: "<< sum / 11.0<<endl;
	int max = 0;
	for(int i=0; i < 11; i++)
	{
		if (players[i] > max)
			max = players[i];
	}
	cout << "maximum age is: "<< max << endl;

	int min = 1000;
	for (int i = 0 ; i < 11 ; i ++)
	{
		if (players[i] < min)
			min = players[i];
	}
	cout << "minimum age is: "<< min << endl;
	return 0;
}
//14
class Player
{
private:
	string name;
	float age;
	string position;

public:
	void set_data(string pname,int page,string pposition);
	string get_name(){return name;}
	float get_age(){return age;}
	string get_position(){return position;}
};
void Player::set_data(string pname,int page,string pposition)
{
	name = pname;
	age = page;
	position = pposition;
}
int main ()
{
	Player p[11];
	string name , position;
	int age;

	for (int i=0 ; i < 11 ; i++)
	{
		cout << "Player no. "<< i+1 << endl;
		cout << "Name: ";
		cin >> name;
		cout << "Position: ";
		cin >> position;
		cout << "age :";
		cin >> age ;
		cout << endl;
		p[i].set_data(name, age, position);
	}

	int sum = 0;
	for (int i=0 ; i < 11 ; i++)
	{
		sum += p[i].get_age();
	}
	cout << "Players' average age is: "<< sum / 11.0 << endl;

	int max = 0;
	string playerMax;
	for (int i=0 ; i < 11 ; i++)
	{
		if (p[i].get_age() > max)
		{
			max = p[i].get_age();
			playerMax = p[i].get_name();
		}
	}
	cout << "the plyer that have maximum age is: "<< playerMax << "("<<max<<")"<< endl;

	int min = 1000;
	string playerMin;
	for (int i=0 ; i < 11 ; i++)
	{
		if (p[i].get_age() < min)
		{
			min = p[i].get_age();
			playerMin = p[i].get_name();
		}
	}
	cout << "the plyer that have minmum age is: "<< playerMin << "("<<min<<")"<< endl;
	return 0;
}
//15
int main()

{
	int a[] = {1,4,9,16,9,7,4,9,11};

	int b[9];

	for ( int i=8 ; i >= 0 ; i-- )
	{
		b[8-i] = a[i];
	}
	for (int i=0 ; i < 9 ; i++ )
	{
		cout << b[i]<< " ";
	}
	
	return 0;
}

//16
bool check(int a[],int b[]);

int main ()
{
	int a[]= {1,4,9,16,9,7,4,9,11};
	int b[]= {11,1,4,9,16,9,7,4,9};
	if(check (a, b))
		cout << "true\n";
	else
		cout << "flase\n";
return 0;
}

bool check(int a[],int b[])
{
	int m1 = 1, m2 = 1;
	for (int i = 0 ; i < 9 ; i++)
	{
		m1 *= a[i];
		m2 *= b[i];
	}

	if(m1==m2)
		return true;
		return false;
}
