#include<windows.h>
#include <GL/glut.h>
#include <math.h>

typedef struct {
	float r;
	float g;
	float b;
} color_t;

typedef struct {
	float x, y;
} Point2D_t;

void setColor(color_t col){
	glColor3f(col.r, col.g, col.b);
}

void drawlines(Point2D_t pnt[], int n){
	int i;
	glBegin(GL_LINES);
	for (i = 0; i < n; i++) {
		glVertex2f(pnt[i].x, pnt[i].y);
	}
	glEnd();
}

void drawPolyline(Point2D_t pnt[], int n){
	int i;
	glBegin(GL_LINE_LOOP);
	for (i = 0; i < n; i++) {
		glVertex2f(pnt[i].x, pnt[i].y);
	}
	glEnd();
}

void gradatePolygon(Point2D_t pnt[], int n, color_t color[]){
	int i;
	glBegin(GL_POLYGON);
	for (i = 0; i < n; i++) {
		setColor(color[i]);
		glVertex2f(pnt[i].x, pnt[i].y);
	}
	glEnd();
}

void fillPolygon(Point2D_t pnt[], int n, color_t color){
	int i;
	setColor(color);
	glBegin(GL_POLYGON);
	for (i = 0; i < n; i++) {
		glVertex2f(pnt[i].x, pnt[i].y);
	}
	glEnd();
}

void langit(){
    Point2D_t langit[4] = { {0,0},{0,600},{1200,600},{1200,0} } ;

    color_t gradiasiLangit[9] = {{1,1,1},{0.28,0.75,0.93},{0.28,0.75,0.93},{1,1,1}} ;
	gradatePolygon(langit, 4, gradiasiLangit);
}

void gedung(){
    Point2D_t atap1[4] = { {1000,0},{1100,100},{900,100},{800,0} } ;
    Point2D_t badan1[3] = { {1000,0},{1100,100},{1100,0} } ;

    Point2D_t badan2a[4] = { {878,0},{881,123},{818,60},{818,0} } ;
    Point2D_t badan2b[4] = { {739,0},{739,59},{818,60},{818,0} } ;
    Point2D_t atap2[4] = { {803,123},{881,123},{818,60},{739,59} } ;
    Point2D_t garis2[2] = {{818,60},{818,0}} ;

    Point2D_t atap3[4] = {{584,184},{702,184},{600,100},{500,100}} ;
    Point2D_t badan3a[4] = { {700,0},{702,184},{600,100},{600,0} } ;
    Point2D_t badan3b[4] = { {500,0},{500,100},{600,100},{600,0} } ;
    Point2D_t garis3[2] = {{600,100},{600,0}} ;

    Point2D_t badan4[5] = { {340,0},{340,40},{400,40},{410,60},{410,0} } ;
    Point2D_t garis4[2] = { {385,0},{385,40} } ;
    Point2D_t atap4[4] = { {340,40},{400,40},{410,60},{360,60} } ;

    Point2D_t badan5[5] = {{200,0},{200,100},{300,100},{350,150},{350,0} } ;
    Point2D_t garis5[2] = { {300,0},{300,100} } ;
    Point2D_t atap5[4] = { {200,100},{300,100},{350,150},{250,150} } ;

    color_t abuabu= { 0.7, 0.67, 0.65 } ;
    color_t abuabumuda= { 0.9, 0.87, 0.85 } ;
    color_t hitam = { 0,0,0 };

    // pewarnaan
    fillPolygon(atap5,4,abuabu);
    fillPolygon(badan5,5,abuabumuda);
    setColor(hitam);
    drawlines(garis5,2);

    fillPolygon(atap4,4,abuabu);
    fillPolygon(badan4,5,abuabumuda);
    setColor(hitam);
    drawlines(garis4,2);

    fillPolygon(atap3,4,abuabu);
    fillPolygon(badan3a,4,abuabumuda);
    fillPolygon(badan3b,4,abuabumuda);
    setColor(hitam);
    drawlines(garis3,2);

    fillPolygon(atap2,4,abuabu);
    fillPolygon(badan2a,4,abuabumuda);
    fillPolygon(badan2b,4,abuabumuda);
    setColor(hitam);
    drawlines(garis2,2);

    fillPolygon(atap1,4,abuabu);
    fillPolygon(badan1,3,abuabumuda);
}

void pesawat(){
	Point2D_t badanPesawat[26] = { {199,297},{204,285},{212,269},{259,248},{350,216},{442,207},{677,219},{1105,260},{1160,280},{1181,295},{1196,312},{1196,323},{1180,336},{1150,350},{1134,362},{1072,380},{1027,384},{879,376},{466,338},{422,337},{371,340},{322,351},{294,364},{134,505},{100,497},{212,299} };
    Point2D_t sayapBelakangKiri[4] = { {287,369},{296,381},{314,381}, {310,356} }  ;
    Point2D_t sayapBelakangKanan[7] = { {3,228},{215,285},{228,286},{244,283},{267,273},{47,218},{10,220} } ;
    Point2D_t sayapKiri[6] = { {723,363},{816,484},{795,537},{821,537},{861,485},{821,372} } ;
    Point2D_t sayapKanan[13] = { {83,118},{115,120},{149,92},{554,224},{731,253},{753,247},{754,242},{749,237},{182,65},{157,63},{139,65},{127,71},{119,83} } ;
    Point2D_t mesinKanan[11] = { {613,193},{610,173},{613,159},{627,146},{643,143},{725,145},{747,159},{758,184},{749,210},{731,220},{691,220} } ;
    Point2D_t kacaSupir[10] = { {1065,340},{1067,324},{1100,325},{1112,328},{1132,338},{1144,348},{1147,354},{1132,362},{1126,353},{1118,350} } ;
    Point2D_t lubangMesin[9] = { {727,214},{709,196},{711,171},{721,154},{734,157},{746,167},{750,183},{747,200},{741,208} } ;
    Point2D_t sayapKiri1[4] = { {722,364},{816,482},{860,484},{823,374} } ;
    Point2D_t sayapKiri2[4] = { {794,536},{815,483},{861,483},{822,537} } ;
    Point2D_t sayapKanan1[5] = { {560,228},{737,252},{757,240},{185,65},{156,92} } ;
    Point2D_t sayapKanan2[7] = { {83,118},{115,120},{182,65},{157,63},{139,65},{127,71},{119,83} } ;

    // bayangan
    Point2D_t buntutShadow1[8] = { {306,336},{275,357},{144,483},{272,340},{275,333},{281,331},{289,328},{298,330} } ;
    Point2D_t buntutShadow2[6] = { {222,304},{358,334},{277,307},{267,301},{256,299},{240,300} } ;
    Point2D_t sayapShadow1[3] = { {820,480},{845,482},{766,405} } ;
    Point2D_t sayapShadow2[3] = { {154,86},{164,76},{486,188} } ;
    Point2D_t mesinShadow[5] = {{618,184},{618,167},{624,157},{629,156},{695,169}} ;

    //jendela penumpang
    Point2D_t jendela1[4] = { {347,267},{347,253},{362,254},{361,268} } ;
    Point2D_t jendela2[4] = { {377,270},{378,256},{392,256},{391,271} } ;
    Point2D_t jendela3[4] = { {407,272},{408,258},{423,258},{422,273} } ;
    Point2D_t jendela4[4] = { {437,275},{438,260},{453,261},{452,276} } ;
    Point2D_t jendela5[4] = { {468,276},{469,261},{484,262},{483,277} } ;
    Point2D_t jendela6[4] = { {499,279},{500,264},{514,265},{513,280} } ;
    Point2D_t jendela7[4] = { {529,282},{530,267},{545,268},{544,283} } ;
    Point2D_t jendela8[4] = { {559,284},{560,269},{575,270},{574,285} } ;
    Point2D_t jendela9[4] = { {590,286},{591,272},{606,273},{605,287} } ;
    Point2D_t jendela10[4] = { {621,288},{622,274},{636,275},{635,289} } ;
    Point2D_t jendela11[4] = { {651,291},{652,276},{666,277},{665,292} } ;
    Point2D_t jendela12[4] = { {681,293},{682,279},{697,279},{696,294} } ;
    Point2D_t jendela13[4] = { {711,295},{712,281},{727,281},{726,297} } ;
    Point2D_t jendela14[4] = { {743,298},{743,283},{758,284},{757,299} } ;
    Point2D_t jendela15[4] = { {773,300},{774,286},{789,287},{788,302} } ;
    Point2D_t jendela16[4] = { {803,303},{804,286},{820,290},{818,304} } ;
    Point2D_t jendela17[4] = { {833,305},{834,288},{850,292},{848,306} } ;
    Point2D_t jendela18[4] = { {863,307},{864,290},{880,295},{878,309} } ;
    Point2D_t jendela19[4] = { {893,309},{894,292},{910,298},{908,311} } ;
    Point2D_t jendela20[4] = { {923,311},{924,294},{940,300},{938,313} } ;
    Point2D_t jendela21[4] = { {953,313},{954,298},{970,302},{968,315} } ;

    //pembatas
    Point2D_t pembatas1[2] = { {997,381},{1024,252} } ;
    Point2D_t pembatas2[2] = { {1040,255},{1013,383} } ;

    // garis bayangan
    Point2D_t garisBayangan1[2] = { {237,274},{44,227} } ;
    Point2D_t garisBayangan2[2] = { {305,373},{302,363} } ;

	color_t hitam = { 0,0,0 };
	color_t putih = { 1,1,1 };
	color_t abuabu= { 0.7, 0.67, 0.65 } ;
	color_t wKacaSupir= { 0.26, 0.77, 0.77 } ;
	color_t wBiruMuda= { 0.34, 1, 1 } ;
	color_t abuabumuda = {0.95,0.95,0.95};

    setColor(hitam);
	drawPolyline(badanPesawat,26);

	color_t gradasiBadan[26] = { {0.95,0.95,0.95},{0.95,0.95,0.95}, {0.95,0.95,0.95},{0.95,0.95,0.95},{0.95,0.95,0.95},{0.95,0.95,0.95}, {0.95,0.95,0.95},{0.34,1,1},{0.34,1,1},{0.34,1,1}, {0.34,1,1},{0.34,1,1},{0.34,1,1},{0.34,1,1}, {0.34,1,1},{0.34,1,1},{0.34,1,1},{0.95,0.95,0.95}, {0.95,0.95,0.95},{0.95,0.95,0.95},{0.95,0.95,0.95},{0.95,0.95,0.95}, {0.95,0.95,0.95},{0.95,0.95,0.95},{0.95,0.95,0.95},{0.95,0.95,0.95} };
	gradatePolygon(badanPesawat, 26, gradasiBadan);

	color_t gradiasiMesinKanan[11] = {{0.95,0.95,0.95},{0.95,0.95,0.95},{0.34,1,1},{0.34,1,1}, {0.34,1,1},{0.34,1,1},{0.34,1,1},{0.34,1,1},{0.34,1,1},{0.95,0.95,0.95},{0.95,0.95,0.95}} ;
	gradatePolygon(mesinKanan, 11, gradiasiMesinKanan);

	color_t gradiasiLubMesin[9] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{1,1,1},{1,1,1},{1,1,1},{1,1,1},{0,0,0}} ;
	gradatePolygon(lubangMesin, 9, gradiasiLubMesin);

	color_t gradiasiSayapKiri[4] = {{0.95,0.95,0.95}, {0.95,0.95,0.95},{0.34,1,1},{0.95,0.95,0.95}} ;
	gradatePolygon(sayapKiri1, 4, gradiasiSayapKiri);

	color_t gradiasiSayapKanan[5] = {{0.95,0.95,0.95},{0.95,0.95,0.95},{0.34,1,1}, {0.95,0.95,0.95},{0.95,0.95,0.95}} ;
	gradatePolygon(sayapKanan1, 5, gradiasiSayapKanan);

	setColor(hitam);
	drawPolyline(sayapBelakangKiri,4);
	drawPolyline(sayapBelakangKanan,7);
	drawPolyline(sayapKiri,6);
	drawPolyline(sayapKanan,13);
	drawPolyline(mesinKanan,11);
	drawPolyline(kacaSupir,10);

	fillPolygon(kacaSupir,10,wKacaSupir);

	setColor(putih);
	fillPolygon(sayapBelakangKiri,4,putih);
	fillPolygon(sayapBelakangKanan,7,putih);
	fillPolygon(sayapKanan2,7,abuabumuda) ;

	setColor(hitam);
    drawlines(garisBayangan1,2);
    drawlines(garisBayangan2,2);

	setColor(abuabu);
	fillPolygon(buntutShadow1,8,abuabu);
	fillPolygon(buntutShadow2,6,abuabu);
	fillPolygon(sayapShadow1,3,abuabu);
	fillPolygon(sayapShadow2,3,abuabu);
	// fillPolygon(mesinShadow,5,abuabu);

	fillPolygon(sayapKiri2,4,wBiruMuda);

	// fill jendela penumpang
	fillPolygon(jendela1,4,hitam);
	fillPolygon(jendela2,4,hitam);
    fillPolygon(jendela3,4,hitam);
    fillPolygon(jendela4,4,hitam);
    fillPolygon(jendela5,4,hitam);
    fillPolygon(jendela6,4,hitam);
    fillPolygon(jendela7,4,hitam);
    fillPolygon(jendela8,4,hitam);
    fillPolygon(jendela9,4,hitam);
    fillPolygon(jendela10,4,hitam);
    fillPolygon(jendela11,4,hitam);
    fillPolygon(jendela12,4,hitam);
    fillPolygon(jendela13,4,hitam);
    fillPolygon(jendela14,4,hitam);
    fillPolygon(jendela15,4,hitam);
    fillPolygon(jendela16,4,hitam);
    fillPolygon(jendela17,4,hitam);
    fillPolygon(jendela18,4,hitam);
    fillPolygon(jendela19,4,hitam);
    fillPolygon(jendela20,4,hitam);
    fillPolygon(jendela21,4,hitam);

    setColor(hitam);
    drawlines(pembatas1,2);
    drawlines(pembatas2,2);
}

void display(void){
	//clear screen
	glClear(GL_COLOR_BUFFER_BIT);

	langit();
	gedung();
	pesawat();

	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("OPEN GL 18051204022");
	glClearColor(1,1,1,1);
	gluOrtho2D(0.,1200.,0.,600.);
	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}
