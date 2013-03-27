using namespace std;

int main()
{		dxf file("design.dxf");	//name of output file
int beamWidth = 300;	// beam width
int beamDepth = 600;	// beam depth
int diaSteelComp = 16;
int radSteelComp = diaSteelComp/2;	
int diaSteelTension = 25;
int radSteelTension = diaSteelTension/2;	
int noSteelComp = 3;
int noSteelTension = 4;
int clearCover = 40;
double x1 = 52;
double y1 = 52;

double x2 = 48;
double y2 = 552;

point pt1(0,0), pt2(beamWidth, beamDepth);
rectangle beam( pt1, pt2, "Layer1", file);

point pt3(40,40), pt4(260, 560);
rectangle r(pt3, pt4, "Layer1", file);

circle *box[noSteelTension];
for (int i=0; i<noSteelTension; i++)
{	point pt5(x1, y1);
box[i] = new circle(pt5, radSteelTension, "Layer1", file);
x1 = x1 + 65.3;
}

circle *box1[noSteelComp];
for (int i=0; i<noSteelComp; i++)
{	point pt5(x2, y2);
box[i] = new circle(pt5, radSteelComp, "Layer1", file);
x2 = x2 + 102;
}
file.save();

return 0 ;

}



