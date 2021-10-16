#include <stdio.h>
#include <unistd.h>

// MADE BY DIERTA PASIFIC

void clearScreen()  ; void menuWelcome()  ; void mainMenuChoose() ; void asciiMainMenu()  ; void menuInput()      ; void menuCalculator() ; void mainChoose() ;
void asciiAdition() ; void addition()   ; void asciiSubtraction()   ; void subtraction()    ; void asciiDivision()  ; void division()   ;
void asciiMultiplication()  ; void multiplication() ; void mainMenu()   ; void asciiPower() ; void power()  ; void asciiSqrt()  ; 
void sqrt() ; void asciiModulo()    ; void modulo() ; void menuVolume()  ; void cube()   ; void asciiCube()  ; void asciiBlock() ;
void block()    ; void asciiSphere(); void sphere() ; void asciiCylinder()  ; void cylinder()   ; void asciitriangularPrism()   ;
void triangularPrism()  ; void asciiPyramid()   ; void triangularPyramid()  ; void rectangularPyramid() ; void asciiCone()  ;void cone()    ;
void menuArea();void asciiSquare();void square();void rectangle();void asciiRectangle();void rectangle(); void asciiTriangle()  ; void triangle() ; 
void asciiTrapezoid() ; void trapezoid()  ; void asciiParallelogram() ; void parallelogram()  ; void asciiKite()    ; void kite()   ; 
void asciiRhombus()   ; void rhombus()    ; void asciiCircle()    ; void circle() ; void asciiPolygon() ; void menuPerimeter(   );
void squareP()  ; void rectangleP() ; void triangleP()  ; void trapezoidP() ; void parallelogramP() ; void kiteP()  ; void rhombusP()   ;
void circleP()  ; void polygonP()   ; void menuOddEven()    ; void oddEven()    ; void menuPrimeNumber()    ; void primeNumber()    ;
void triangleSincostanFunc()    ; void asciiSincostan()     ; void sinCosTanLen()  ; void menuSinCosTan()   ; void triangleSincostanAng()   ;
void asciiGoodBye() ; void delay()  ;

int inputMenu   ; int inputMenuCalculator   ; int inputMenuVolume   ; int inputMenuArea ;
int inputMenuPerimeter  ; int inputMenuOddeven  ; int inputMenuPrimeNumber  ; int inputMenuSinCosTan    ;
int inputSinCosTansct    ; char inputSinCosTanABC    ;


int main () {   

    clearScreen();
    printf("\n\n"); 
    printf("  _           _                  _      __  __       _   _     \n");delay()  ;
    printf(" | |         | |                | |    |  \\/  |     | | | |    \n");delay()  ;
    printf(" | |     __ _| |_ ___ _   _ _ __| | __ | \\  / | __ _| |_| |__  \n");delay()  ;
    printf(" | |    / _` | __/ __| | | | '__| |/ / | |\\/| |/ _` | __| '_ \\ \n");delay()  ;
    printf(" | |___| (_| | |_\\__ \\ |_| | |  |   <  | |  | | (_| | |_| | | | \n");delay()  ;
    printf(" |______\\__,_|\\__|___/\\\\__,|_|  |_|\\_\\ |_|  |_|\\__,_|\\__|_| |_|\n");delay()  ;
    printf("                       __/ |                                   \n");delay()  ;
    printf("                      |___/                                    \n");  delay()  ; 
    
    mainMenu();
    
    return 0;
}


void mainMenu(){
    clearScreen();  
    asciiMainMenu();
    menuWelcome();
    mainMenuChoose();
    menuInput();
    clearScreen();
    mainChoose();

}

void mainChoose(){ 

    if( inputMenu == 1 ){
        menuCalculator();
            if ( inputMenuCalculator == 1 ){
               
                clearScreen();
                asciiAdition();
                addition();

            } else if ( inputMenuCalculator == 2 ){

                clearScreen();
                asciiSubtraction();
                subtraction();

            } else if ( inputMenuCalculator == 3 ){
                
                clearScreen();
                asciiDivision();    
                division();

            } else if ( inputMenuCalculator == 4 ){

                clearScreen();
                asciiMultiplication();
                multiplication();

            } else if ( inputMenuCalculator == 5 ){

                clearScreen();
                asciiPower();
                power();

            } else if ( inputMenuCalculator == 6 ){

                clearScreen();
                asciiSqrt();
                sqrt();

            } else if ( inputMenuCalculator == 7 ) {

                clearScreen();
                asciiModulo();
                modulo();

            } else if ( inputMenuCalculator == 8 ){

                mainMenu();
                
            } 

    } else if ( inputMenu == 2 ){
        menuVolume();
            if ( inputMenuVolume == 1 ) {

                clearScreen();
                asciiCube();
                cube();

            } else if ( inputMenuVolume == 2 ){

                clearScreen();
                asciiBlock();
                block();

            } else if ( inputMenuVolume == 3 ){

                clearScreen();
                asciiSphere();
                sphere();

            } else if ( inputMenuVolume == 4 ){

                clearScreen();
                asciiCylinder();
                cylinder();

            } else if ( inputMenuVolume == 5 ){
                
                clearScreen();
                asciitriangularPrism();
                triangularPrism();

            } else if ( inputMenuVolume == 6 ){

                clearScreen();
                asciiPyramid();
                triangularPyramid();

            } else if ( inputMenuVolume == 7 ){
                
                clearScreen();
                asciiPyramid();
                rectangularPyramid();

            } else if ( inputMenuVolume == 8 ){

                clearScreen();
                asciiCone();
                cone();

            } else if ( inputMenuVolume == 9 ){

                mainMenu();

            }
    } else if ( inputMenu == 3 ){
        menuArea();
            if ( inputMenuArea == 1 ){

                clearScreen();
                asciiSquare();
                square();
            } else if ( inputMenuArea == 2 ){

                clearScreen();
                asciiRectangle();
                rectangle();

            } else if ( inputMenuArea == 3 ){
                
                clearScreen();
                asciiTriangle();
                triangle();

            } else if ( inputMenuArea == 4 ){
                
                clearScreen();
                asciiTrapezoid();
                trapezoid();

            } else if ( inputMenuArea == 5 ){
                
                clearScreen();
                asciiParallelogram();
                parallelogram();

            } else if ( inputMenuArea == 6 ){
                
                clearScreen();
                asciiKite();
                kite();

            } else if ( inputMenuArea == 7 ){
                
                clearScreen();
                asciiRhombus();
                rhombus();

            } else if ( inputMenuArea == 8 ){
                
                clearScreen();
                asciiCircle();
                circle();

            } else if ( inputMenuArea == 9 ){
                
                mainMenu();

            }
    } else if ( inputMenu == 4 ){
        menuPerimeter();
            if ( inputMenuPerimeter == 1 ){

                clearScreen();
                asciiSquare();
                squareP();

            } else if ( inputMenuPerimeter == 2 ){

                clearScreen();
                asciiRectangle();
                rectangleP();

            } else if ( inputMenuPerimeter == 3 ){

                clearScreen();
                asciiTriangle();
                triangleP();

            } else if ( inputMenuPerimeter == 4 ){

                clearScreen();
                asciiTrapezoid();
                trapezoidP();

            } else if ( inputMenuPerimeter == 5 ){

                clearScreen();
                asciiParallelogram();
                parallelogramP();

            } else if ( inputMenuPerimeter == 6 ){

                clearScreen();
                asciiKite();
                kiteP();

            } else if ( inputMenuPerimeter == 7 ){

                clearScreen();
                asciiRhombus();
                rhombusP();

            } else if ( inputMenuPerimeter == 8 ){

                clearScreen();
                asciiCircle();;
                circleP();

            } else if ( inputMenuPerimeter == 9 ){

                clearScreen();
                asciiPolygon();;
                polygonP();

            } else if ( inputMenuPerimeter == 10 ){

                mainMenu();

            }
    } else if ( inputMenu == 5 ){
        menuOddEven();
            if ( inputMenuOddeven == 1 ){

                clearScreen();
                oddEven();

            } else if( inputMenuOddeven == 2 ){

                mainMenu();

            }
    } else if ( inputMenu == 6 ){
        menuPrimeNumber();
            if ( inputMenuPrimeNumber == 1 ){

                clearScreen();
                primeNumber();

            } else if ( inputMenuPrimeNumber == 2 ){

                clearScreen();
                mainMenu();

            }
    } else if ( inputMenu == 7 ){

            clearScreen();
            asciiSincostan();
            menuSinCosTan();

    } else if ( inputMenu == 8 ){

        asciiGoodBye();

    }
}

void menuWelcome(){
    printf( "\nWelcome to Latsyrk Math!\nThis program can help you solve math problems using C Programming Language without <math.h> library.\nHere is what you can do:\n" ) ;
    printf( "1 Calculator\n2 Volume\n3 Area\n4 Perimeter\n5 Odd/Even\n6 Prime Number\n7 Sin Cos Tan\n8 Exit\n\n" ) ;      
}

void mainMenuChoose(){
    printf( "Choose which menu you want to use (enter the number) : " ) ;
}

void menuInput(){
    scanf( "%d", &inputMenu ) ; 
        if(inputMenu<=0 || inputMenu>8){
            clearScreen();   
            mainMenu();
        }
}

void modulo(){        
    int choosen=0;
    int angkaMod;int mod;
            do{
                printf("\nWhat number do you want to be the base(b integer) and the mod(n integer) in the form of b modulo n (ex: 4 2): ");
                scanf("%d %d", &angkaMod, &mod);

                if(angkaMod<mod){
                    printf("\nb value must be bigger than n.\n");
                    modulo();
                } else if(angkaMod>=mod){
                    
                    int total ;
                    total = angkaMod%mod;

                    printf("\nThe modulo result of %d mod %d is %d",angkaMod,mod,total);

                                 
                }
                printf("\n\nDo you want to do modulo again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
                scanf("%d",&choosen);  

                clearScreen();
                asciiModulo();
            } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
        menuCalculator();
    }
}

void sqrt(){
    int choosen=0;
    double num; 
        do{
            printf("\nWhat number do you want use for squareroot (ex: 5): ");
            scanf("%lf", &num);

            double sqrt = num/2;
            double total = 0;

            while(sqrt != total){
                total = sqrt;
                sqrt = (num/total + total)/2;
            }

            printf("\nThe squareroot of %.2lf is %.2lf",num,sqrt);


            printf("\n\nDo you want to do squareroot again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiSqrt();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
        menuCalculator();
    }
}

void power(){
    int choosen=0;
    double base; int pangkat;
        do{
            printf("\nWhat is your base(b) and your exponent(n must be integer) value in the form of b^n (ex: 4 2): ");
            scanf("%lf %d", &base, &pangkat);

            double total=base;

            for(int i=1 ; i<pangkat ; i++){
                total*=base;
            }

            printf("\nThe exponentiation result of %.2lf and %d.00 is %.2lf",base,pangkat,total);


            printf("\n\nDo you want to do exponentiation again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);
            
            clearScreen();
            asciiPower();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
        menuCalculator();
    }
}

void multiplication(){
    int choosen=0;
        do{
            int totalNum;
            printf("\nHow many numbers do you want to multiply (ex: 3): ");
            scanf("%d", &totalNum);
            
            double total = 1;
            double num [totalNum];

            printf("The numbers you want to multiply are (ex: 3 2 1): ");
            
            for(int i=0; i<totalNum; i++){
                scanf("%lf", &num[i]);
                total *= num[i];
            }

            printf("\nThe multiplication result of ");

            for(int i = 0 ; i<totalNum ; i++){
                    printf("%.2lf ",num[i]) ;
                    if( i < (totalNum-1)){
                        printf("x ");
                    }
                }
            printf("is %.2lf.",total);

            printf("\n\nDo you want to do multiplication again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiMultiplication();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
        menuCalculator();
    }

}

void division(){   
    int choosen=0;
        do{
            double A;
            double B;
            printf("\nFor division, you can only divide 2 numbers\nPlease enter your number (ex: 5 3): ");
            scanf("%lf %lf",&A, &B);
            printf("\nThe result of %.2lf divided by %.2lf is %.2lf.",A,B,A/B);

            printf("\n\nDo you want to do division again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiDivision();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
        menuCalculator();
    } 

}

void subtraction(){
    int choosen = 0;
        do{
            int totalNum;
            
            printf("\nHow many numbers do you want to substract (ex: 3): ");
            scanf("%d", &totalNum);

            double num[totalNum];
            double total = 0  ;
            
            printf("The numbers you want to substract are (ex: 3 2 1): ");

                for(int i = 0 ; i<totalNum ; i++){
                    scanf("%lf",&num[i]);
                }

            total = num[0];

                for(int i = 1 ; i<=totalNum ; i++){
                    total -= num[i];
                }
        
            printf("\nThe subtraction result of ");

                for(int i = 0 ; i<totalNum ; i++){
                    if(i == 0 && num[i]<0){
                        printf("-%.2lf ",num[i]*-1);
                    } else if(num [i] > 0 && i>0){
                        printf("%.2lf ",num[i]);
                    } else if(num[i]<0 && i>0){
                        printf("%.2lf ",num[i]*-1);
                    }else{
                        printf("%.2lf ",num[i]);
                    }
                    
                    if(num[i+1] < 0 && i < (totalNum-1)){
                        printf("+ ");
                    }else if( i < (totalNum-1) && num[i+1] > 0){
                        printf("- ");
                    }
                }

            printf("is %.2lf.", total);

            printf("\n\nDo you want to do subtraction  again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiSubtraction();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
        menuCalculator();
    }
    
}

void addition(){
    
    int choosen = 0;
    
        do{
            int totalNum;
            printf("\nHow many numbers do you want to add (ex: 3)\t: ");
            scanf("%d", &totalNum);

            double total = 0 ;
            double num[totalNum];

            printf("The numbers you want to add are (ex: 3 2 1)\t: ");

                for(int i = 0 ; i<totalNum ; i++){
                    scanf("%lf", &num[i]);
                    total += num[i];
                }

            printf("\nThe addition result of ");

                for(int i = 0 ; i<totalNum ; i++){
                    if(num[i]>=0){
                        printf("%.2lf ",num[i]) ;
                    } else if(num[i]<0){
                        printf("(%.2lf) ",num[i]) ;
                    }
                    
                    if( i < (totalNum-1)){
                        printf("+ ");
                    }
                }

            printf("is %.2lf.",total);

            printf("\n\nDo you want to do addition again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiAdition();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
        menuCalculator();
    }
    
}

void menuCalculator(){
    printf("\n\n");
    printf("   _____      _            _       _             \n");
    printf("  / ____|    | |          | |     | |            \n");
    printf(" | |     __ _| | ___ _   _| | __ _| |_ ___  _ __ \n");
    printf(" | |    / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n");
    printf(" | |___| (_| | | (__| |_| | | (_| | || (_) | |   \n");
    printf("  \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   \n");

    printf("\n1 Addition\t\t\t(Penjumlahan)\n2 Subtraction\t\t\t(Pengurangan)\n3 Division\t\t\t(Pembagian)\n4 Multiplication\t\t(Perkalian)\n5 Exponentiation or Power\t(Pangkat)\n6 Squareroot\t\t\t(Akar)\n7 Modulo\t\t\t(Modulo)\n8 Go back\n");

    printf("\nWhich math function you want to use (enter the number) : ");
    scanf("%d",&inputMenuCalculator);
    
        if( inputMenuCalculator<=0 || inputMenuCalculator>8 ){
            clearScreen();
            printf("\nPlease enter number between 1-8.\n");
            menuCalculator();
        } 
    
    clearScreen();
}

void cone(){
    int choosen=0;
    double radiuscone; double heightcone; 
        do{
            double total;
            double phi = 3.141592653589793238;

            printf("\nThe radius and the height of your cone is (ex: 3 5): ");
            scanf("%lf %lf",&radiuscone, &heightcone);
            
            total = ((radiuscone*radiuscone)*phi*heightcone)/3;

            printf("\nThe volume of cone with %.2lf radius and %.2lf height is %.2lf.",radiuscone,heightcone,total);

            printf("\n\nDo you want to find the cone volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiCone();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    }
}

void rectangularPyramid(){
    int choosen=0;
    double heightrectangularPyramid; double baselengthrectangularPyramid; double basewidthrectangularPyramid;
        do{
            double total;

            printf("\nThe height, base length and base width of your rectangular pyramid is(ex: 4 2 3): ");
            scanf("%lf %lf %lf",&heightrectangularPyramid,&baselengthrectangularPyramid,&basewidthrectangularPyramid);
            
            total= (heightrectangularPyramid*baselengthrectangularPyramid*basewidthrectangularPyramid)/3;
            
            printf("\nThe volume of rectangular pyramid with %.2lf height and %.2lf base length and %.2lf base height is %.2lf.",heightrectangularPyramid,baselengthrectangularPyramid,basewidthrectangularPyramid,total);

            printf("\n\nDo you want to find the rectangular pyramid volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiPyramid();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    } 
}

void triangularPyramid(){
    int choosen=0;
    double heighttriangularPyramid; double baseheighttriangularPyramid;double baselengthtriangularPyramid;
        do{
            double total;
            double area;

            printf("\nThe height, base length and base height of your triangular pyramid is (4 2 3): ");
            scanf("%lf %lf %lf",&heighttriangularPyramid,&baselengthtriangularPyramid,&baseheighttriangularPyramid);
            
            area = (baseheighttriangularPyramid*baselengthtriangularPyramid)/2;
            total= (area*heighttriangularPyramid)/3;
            
            printf("\nThe volume of triangular pyramid with %.2lf height and %.2lf base length and %.2lf base height is %.2lf.",heighttriangularPyramid,baselengthtriangularPyramid,baseheighttriangularPyramid,total);

            printf("\n\nDo you want to find the triangular pyramid volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiPyramid();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    } 
}

void triangularPrism(){
    int choosen=0;
    double basetriangularPrism; double baseheighttriangularPrism; double heighttriangularPrism;
        do{
            double total;

            printf("\nThe prism height, base length and base height of your triangular prism is (ex: 4 2 3): ");
            scanf("%lf %lf %lf",&heighttriangularPrism,&basetriangularPrism,&baseheighttriangularPrism);
            
            total=((basetriangularPrism*baseheighttriangularPrism)/2)*heighttriangularPrism;
            
            printf("\nThe volume of triangular prism with %.2lf height and %.2lf base length and %.2lf base height is %.2lf.",heighttriangularPrism,basetriangularPrism,baseheighttriangularPrism,total);

            printf("\n\nDo you want to find the triangular prism volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciitriangularPrism();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    }
}

void cylinder(){
    int choosen=0;
    double cylinderheight; double cylinderradius;
        do{
            double total;
            double phi = 3.141592653589793238;

            printf("\nThe height of the cylinder and radius of the base is (ex: 5 3): ");
            scanf("%lf %lf",&cylinderheight, &cylinderradius);

            total = phi*cylinderradius*cylinderradius*cylinderheight;

            printf("\nThe volume of cylinder with %.2lf height and %.2lf radius is %.2lf.",cylinderheight,cylinderradius,total);

            printf("\n\nDo you want to find the cylinder volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiCylinder();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    };
}

void sphere(){
    int choosen=0;
    double sphereradius;
        do{
            double total;
            double phi = 3.141592653589793238;

            printf("\nThe radius of your sphere is (ex: 5): ");
            scanf("%lf",&sphereradius);
            
            total = (4*phi*sphereradius*sphereradius*sphereradius)/3;

            printf("\nThe volume of sphere with %.2lf radius is %.2lf.",sphereradius,total);

            printf("\n\nDo you want to find the sphere volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiSphere();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    }
}

void block(){
    int choosen=0;
    double blocklength; double blockwidth; double blockheight; 
        do{
            double total;
            
            printf("\nThe length, width and height of your block is (ex: 3 5 4): ");
            scanf("%lf %lf %lf",&blocklength, &blockwidth, &blockheight);
            
            total = blocklength*blockwidth*blockheight;

            printf("\nThe volume of block with %.2lf length %.2lf width %.2lf height is %.2lf.",blocklength,blockwidth,blockheight,total);

            printf("\n\nDo you want to find the block volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiBlock();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    }
}

void cube(){
   int choosen=0;
   double cubelength;
        do{
            double total;
            
            printf("\nThe length of your cube is (ex: 5): ");
            scanf("%lf",&cubelength);
            
            total=cubelength;
            total*=cubelength;
            total*=cubelength;

            printf("\nThe volume of cube with %.2lf length is %.2lf.",cubelength,total);

            printf("\n\nDo you want to find the cube volume again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiCube();
        } while(choosen==1);

    clearScreen();
    
    mainChoose();
    if(inputMenu != 8){
         menuVolume();
    }
}

void menuVolume(){
    printf("\n\n");
    printf(" __      __   _                      \n");
    printf(" \\ \\    / /  | |                     \n");
    printf("  \\ \\  / /__ | |_   _ _ __ ___   ___ \n");
    printf("   \\ \\/ / _ \\| | | | | '_ ` _ \\ / _ \\\n");
    printf("    \\  / (_) | | |_| | | | | | |  __/\n");
    printf("     \\/ \\___/|_|\\__,_|_| |_| |_|\\___|\n");

    printf("\n1 Cube \t\t\t(Kubus)\n2 Block \t\t(Balok)\n3 Sphere \t\t(Bola)\n4 Cylinder \t\t(Tabung)\n5 Triangular Prism \t(Prisma Segitiga)\n6 Triangular Pyramid \t(Limas Segitiga)\n7 Rectangular Pyramid \t(Limas Segiempat)\n8 Cone \t\t\t(Kerucut)\n9 Go Back\n");

    printf("\nWhich tridimensional shape volume you wanted to find : ");
    scanf("%d",&inputMenuVolume);
    
        if( inputMenuVolume<=0 || inputMenuVolume>9 ){
            clearScreen();
            printf("\nPlease enter number between 1-9.\n");
            menuVolume();
        } 

    clearScreen();
}

void circle(){
    int choosen=0;
        do{
            double A;
            double phi =3.141592653589793238;
            double total;

            printf("\nThe radius of your circle is (ex: 5): ");
            scanf("%lf",&A);

            total = (A*A)*phi;

            printf("\nThe circle area with %.2lf radius is %.2lf.",A,total);

            printf("\n\nDo you want to find the circle area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiCircle();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void rhombus(){
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe first and second diagonal of your rhombus is (ex: 3 5): ");
            scanf("%lf %lf",&A,&B);

            total = (A*B)/2;

            printf("\nThe rhombus area with %.2lf and %.2lf diagobal is %.2lf.",A,B,total);

            printf("\n\nDo you want to find the rhombus area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiRhombus();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void kite(){
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe first and second diagonal of your kite is (ex: 3 5): ");
            scanf("%lf %lf",&A,&B);

            total = (A*B)/2;

            printf("\nThe kite area with %.2lf and %.2lf diagobal is %.2lf.",A,B,total);

            printf("\n\nDo you want to find the kite area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiKite();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void parallelogram(){
    int choosen=0;
        do{
            double A;
            double height;
            double total;

            printf("\nThe base length and the height of your parallelogram is (ex: 3 5): ");
            scanf("%lf %lf",&A,&height);

            total = A*height;

            printf("\nThe parallelogram area with %.2lf length and %.2lf height is %.2lf.",A,height,total);

            printf("\n\nDo you want to find the parallelogram area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiParallelogram();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void trapezoid(){
    int choosen=0;
        do{
            double A;
            double B;
            double height;
            double total;

            printf("\nThe first base length, second base length and the height of your trapezoid is (ex: 3 4 5): ");
            scanf("%lf %lf %lf",&A, &B,&height);

            total = ((A+B)/2)*height;

            printf("\nThe trapezoid area with %.2lf first base length, %.2lf second base length and %.2lf height is %.2lf.",A,B,height,total);

            printf("\n\nDo you want to find the trapezoid area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiTrapezoid();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void triangle(){
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe base length and the height of your triangle is (ex: 3 5): ");
            scanf("%lf %lf",&A, &B);

            total = (A*B)/2;

            printf("\nThe triangle area with %.2lf base length and %.2lf height is %.2lf.",A,B,total);

            printf("\n\nDo you want to find the triangle area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiTriangle();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void rectangle(){
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe length and the width of your rectangle is (ex: 3 5): ");
            scanf("%lf %lf",&A, &B);

            total = A*B;

            printf("\nThe rectangle area with %.2lf length and %.2lf width is %.2lf.",A,B,total);

            printf("\n\nDo you want to find the rectangle area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiRectangle();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void square(){
    int choosen=0;
        do{
            double A;
            double total;

            printf("\nThe length of your square (ex: 5): ");
            scanf("%lf",&A);

            total = A*A;

            printf("\nThe square area with %.2lf length is %.2lf.",A,total);

            printf("\n\nDo you want to find the square area again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiSquare();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuArea();
    }
}

void menuArea(){
    printf("\n\n");
    printf("     /\\                   \n");
    printf("    /  \\   _ __ ___  __ _ \n");
    printf("   / /\\ \\ | '__/ _ \\/ _` |\n");
    printf("  / ____ \\| | |  __/ (_| |\n");
    printf(" /_/    \\_\\_|  \\___|\\__,_|\n");

    printf("\n1 Square \t(Persegi)\n2 Rectangle \t(Persegi Panjang)\n3 Triangle \t(Segitiga)\n4 Trapezoid \t(Trapesium)\n5 Parallelogram (Jajargenjang)\n6 Kite \t\t(Layang-layang)\n7 Rhombus \t(Belah Ketupat)\n8 Circle \t(Lingkaran)\n9 Go Back\n");

    printf("\nWhich twodimensional shape area you wanted to find : ");
    scanf("%d",&inputMenuArea);
    
        if( inputMenuArea<=0 || inputMenuArea>9 ){
            clearScreen();
            printf("\nPlease enter number between 1-9.\n");
            menuArea();
        }

    clearScreen();
}

void polygonP(){    
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe number of sides and length of each side of your polygon is (ex: 5 3): ");
            scanf("%lf %lf",&A,&B);

            total = (A*B);

            printf("\nThe polygon perimeter with %.2lf number of sides and %.2lf length is %.2lf.",A,B,total);

            printf("\n\nDo you want to find the polygon perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiPolygon();
        } while(choosen==1);

    clearScreen();
    
    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
  
}

void circleP(){
    int choosen=0;
        do{
            double A;
            double phi = 3.141592653589793238;
            double total;

            printf("\nThe radius of your circle is (ex: 5): ");
            scanf("%lf",&A);

            total = 2*phi*A;

            printf("\nThe circle perimeter with %.2lf radius is %.2lf.",A,total);

            printf("\n\nDo you want to find the circle perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiCircle();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
}

void rhombusP(){
    int choosen=0;
        do{
            double A;
            double total;

            printf("\nThe side length of your rhombus is (ex: 5): ");
            scanf("%lf",&A);

            total = 4*A;

            printf("\nThe rhombus perimeter with %.2lf length is %.2lf.",A,total);

            printf("\n\nDo you want to find the rhombus perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiRhombus();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
}

void kiteP(){
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe first side length and the second side length of your kite is (ex: 3 5): ");
            scanf("%lf %lf",&A,&B);

            total = (A+B)*2;

            printf("\nThe kite perimeter with %.2lf and %.2lf side length is %.2lf.",A,B,total);

            printf("\n\nDo you want to find the kite perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiKite();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }  menuPerimeter();
    
}

void parallelogramP(){
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe base length and the side length of your parallelogram is (ex: 3 5): ");
            scanf("%lf %lf",&A,&B);

            total = (A+B)*2;

            printf("\nThe parallelogram perimeter with %.2lf base length and %.2lf side length is %.2lf.",A,B,total);

            printf("\n\nDo you want to find the parallelogram perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);
            
            clearScreen();
            asciiParallelogram();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
}

void trapezoidP(){
    int choosen=0;
        do{
            double A;
            double B;
            double C;
            double D;
            double total;

            printf("\nThe A and B base length, C and D side length of your trapezoid is (ex: 2 3 4 5): ");
            scanf("%lf %lf %lf %lf",&A, &B,&C, &D);

            total = A+B+C+D;

            printf("\nThe trapezoid perimeter with %.2lf and %.2lf base length, %.2lf and %.2lf side length is %.2lf.",A,B,C,D,total);

            printf("\n\nDo you want to find the trapezoid perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiTrapezoid();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
}

void triangleP(){
    int choosen=0;
        do{
            double A;
            double B;
            double C;
            double total;

            printf("\nThe a, b, c length of your triangle is (ex: 3 4 5): ");
            scanf("%lf %lf %lf",&A, &B, &C);

            total = A+B+C;

            printf("\nThe triangle perimeter with %.2lf,%.2lf,%.2lf length is %.2lf.",A,B,C,total);

            printf("\n\nDo you want to find the triangle perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiTriangle();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
}

void rectangleP(){
    int choosen=0;
        do{
            double A;
            double B;
            double total;

            printf("\nThe length and the width of your rectangle is (ex: 3 5): ");
            scanf("%lf %lf",&A, &B);
            A*=2; B*=2;

            total = A+B;

            printf("\nThe rectangle perimeter with %.2lf length and %.2lf width is %.2lf.",A/2,B/2,total);

            printf("\n\nDo you want to find the rectangle perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiRectangle();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
}

void squareP(){
    int choosen=0;
        do{
            double A;
            double total;

            printf("\nThe length of your square (ex: 5): ");
            scanf("%lf",&A);

            total = 4*A;

            printf("\nThe square perimeter with %.2lf length is %.2lf.",A,total);

            printf("\n\nDo you want to the find square perimeter again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
            asciiSquare();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPerimeter();
    }
}

void menuPerimeter(){
    printf("\n\n");
    printf("  _____          _                _            \n");
    printf(" |  __ \\        (_)              | |           \n");
    printf(" | |__) |__ _ __ _ _ __ ___   ___| |_ ___ _ __ \n");
    printf(" |  ___/ _ \\ '__| | '_ ` _ \\ / _ \\ __/ _ \\ '__|\n");
    printf(" | |  |  __/ |  | | | | | | |  __/ ||  __/ |   \n");
    printf(" |_|   \\___|_|  |_|_| |_| |_|\\___|\\__\\___|_|   \n");

    printf("\n1 Square \t(Persegi)\n2 Rectangle \t(Persegi Panjang)\n3 Triangle \t(Segitiga)\n4 Trapezoid \t(Trapesium)\n5 Parallelogram (Jajargenjang)\n6 Kite \t\t(Layang-layang)\n7 Rhombus \t(Belah Ketupat)\n8 Cirlce \t(Lingkaran)\n9 Polygon\t(Poligon)\n10 Go Back\n");

    printf("\nWhich twodimensional shape perimeter you wanted to find : ");
    scanf("%d",&inputMenuPerimeter);
    
        if( inputMenuPerimeter<=0 || inputMenuPerimeter>10 ){
            clearScreen();
            printf("\nPlease enter number between 1-10.\n");
            menuPerimeter();
        }
    
    clearScreen();
}

void primeNumber(){ 
    int choosen=0;
        do{
            int A;
            int ctr=0;
            int B;

            printf("\n\n");
            printf("  _____      _                  _   _                 _               \n");
            printf(" |  __ \\    (_)                | \\ | |               | |              \n");
            printf(" | |__) | __ _ _ __ ___   ___  |  \\| |_   _ _ __ ___ | |__   ___ _ __ \n");
            printf(" |  ___/ '__| | '_ ` _ \\ / _ \\ | . ` | | | | '_ ` _ \\| '_ \\ / _ \\ '__|\n");
            printf(" | |   | |  | | | | | | |  __/ | |\\  | |_| | | | | | | |_) |  __/ |   \n");
            printf(" |_|   |_|  |_|_| |_| |_|\\___| |_| \\_|\\__,_|_| |_| |_|_.__/ \\___|_|   \n");

            printf("\nThe number you wanted to check wheter its prime number or not is (ex: 5): ");
            scanf("%d",&A);

            B=A/2;

            for(int i=2; i<=B; i++){
                if(A%i == 0){
                    ctr++;
                    break;
                }else if(A%i != 0){
                    ctr+=0;
                }
            }

            if(ctr==0){
                printf("\n%d is a prime number.",A);
            } else{
                printf("\n%d is not a prime number.",A);
            }

            printf("\n\nDo you want to use Odd/Even function again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuPrimeNumber();
    } 
}

void menuPrimeNumber(){
    printf("\n\n");
    printf("  _____      _                  _   _                 _               \n");
    printf(" |  __ \\    (_)                | \\ | |               | |              \n");
    printf(" | |__) | __ _ _ __ ___   ___  |  \\| |_   _ _ __ ___ | |__   ___ _ __ \n");
    printf(" |  ___/ '__| | '_ ` _ \\ / _ \\ | . ` | | | | '_ ` _ \\| '_ \\ / _ \\ '__|\n");
    printf(" | |   | |  | | | | | | |  __/ | |\\  | |_| | | | | | | |_) |  __/ |   \n");
    printf(" |_|   |_|  |_|_| |_| |_|\\___| |_| \\_|\\__,_|_| |_| |_|_.__/ \\___|_|   \n");

    printf("\n1 Prime Number\n2 Go Back\n");

    printf("\nWhich function you wanted to use : ");
    scanf("%d",&inputMenuPrimeNumber);
    
        if( inputMenuPrimeNumber<=0 || inputMenuPrimeNumber>2 ){
            clearScreen();
            printf("\nPlease enter number between 1-2.\n");
            menuPrimeNumber();
        }

    clearScreen();
}

void oddEven(){
    int choosen=0;
        do{
            int A;

            printf("\n\n");
            printf("   ____      _     _       __  ______               \n");
            printf("  / __ \\    | |   | |     / / |  ____|              \n");
            printf(" | |  | | __| | __| |    / /  | |____   _____ _ __  \n");
            printf(" | |  | |/ _` |/ _` |   / /   |  __\\ \\ / / _ \\ '_ \\ \n");
            printf(" | |__| | (_| | (_| |  / /    | |___\\ V /  __/ | | |\n");
            printf("  \\____/ \\__,_|\\__,_| /_/     |______\\_/ \\___|_| |_|\n");

            printf("\nThe number you want to check is either odd or even (ex: 5): ");
            scanf("%d",&A);

            if( A % 2 == 0){
                printf("\n%d is an even number.",A);
            } else if( A % 2 != 0){
                printf("\n%d is an odd number.",A);
            }

            printf("\n\nDo you want to use Odd/Even function again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
        } while(choosen==1);

    clearScreen();
    
    mainChoose();
    if(inputMenu != 8){
         menuOddEven();
    }
}

void menuOddEven(){
    printf("\n\n");
    printf("   ____      _     _       __  ______               \n");
    printf("  / __ \\    | |   | |     / / |  ____|              \n");
    printf(" | |  | | __| | __| |    / /  | |____   _____ _ __  \n");
    printf(" | |  | |/ _` |/ _` |   / /   |  __\\ \\ / / _ \\ '_ \\ \n");
    printf(" | |__| | (_| | (_| |  / /    | |___\\ V /  __/ | | |\n");
    printf("  \\____/ \\__,_|\\__,_| /_/     |______\\_/ \\___|_| |_|\n");

    printf("\n1 Odd/Even\n2 Go Back\n");

    printf("\nWhich function you wanted to use : ");
    scanf("%d",&inputMenuOddeven);
    
        if( inputMenuOddeven<=0 || inputMenuOddeven>2 ){
            clearScreen();
            printf("\nPlease enter number between 1-2.\n");
            menuOddEven();
        } else if ( inputMenuOddeven==2 ) {
            mainMenu();
        }

    clearScreen();
}

void triangleSincostanAng(){
    char symbol=251; //akar
    char symbol1=236; //infinity
    int sct;
    int anglesct;
    int angle;

    

    int choosen=0;
        do{
            printf("\t\t\t\t\t\t\tSIN COS TAN TABLE");
            printf("\n\n");
            printf(" __________________________________________________________________________________________________________________________________________\n");
            printf("|                                                                                                                                          |\n");
            printf("|   angle   |      0     |    30    |    45    |    60    |    90    |    120    |    135    |    150    |    180    |    37    |    53    |\n");
            printf("|                                                                                                                                          |\n");
            printf("|------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("|                                                                                                                                          |\n");
            printf("|    sin    |    %c0/2    |   %c1/2   |   %c2/2   |   %c3/2   |   %c4/2   |    %c3/2   |    %c2/2   |    %c1/2   |   %c0/2    |    3/5   |    4/5   |\n",symbol,symbol,symbol,symbol,symbol,symbol    ,symbol,symbol,symbol);
            printf("|                                                                                                                                          |\n");
            printf("|------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("|                                                                                                                                          |\n");
            printf("|    cos    |    %c4/2    |   %c3/2   |   %c2/2   |   %c1/2   |   %c0/2   |   -%c1/2   |   -%c2/2   |   -%c3/2   |   -%c4/2   |    4/5   |    3/5   |\n",symbol,symbol,symbol,symbol,symbol,symbol,symbol,symbol,symbol);
            printf("|                                                                                                                                          |\n");
            printf("|------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("|                                                                                                                                          |\n");
            printf("|    tan    |   %c(0/4)   |  %c(1/3)  |  %c(2/2)  |  %c(3/1)  |     %c    |  -%c(3/1)  |  -%c(2/2)  |  -%c(1/3)  |  -%c(0/4)  |    3/4    |   4/3   |\n",symbol,symbol,symbol,symbol,symbol1,symbol,symbol,symbol,symbol,symbol);
            printf("|                                                                                                                                          |\n");
            printf("|------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("|                                                                                                                                          |\n");
            printf("|    cot    |      %c     |  %c(3/1)  |  %c(2/2)  |  %c(1/3)  |     0    |  -%c(1/3)  |  -%c(2/2)  |  -%c(3/1)  |     %c     |    4/3    |   3/4   |\n",symbol1,symbol,symbol,symbol,symbol,symbol,symbol,symbol1);
            printf("|                                                                                                                                          |\n");
            printf("|------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("|                                                                                                                                          |\n");
            printf("|    csc    |      %c     |   2/%c1   |   2/%c2   |   2/%c3   |   2/%c4   |   2/%c3    |   2/%c2    |   2/%c1    |     %c     |    5/3    |   5/4   |\n",symbol1,symbol,symbol,symbol,symbol,symbol,symbol,symbol,symbol1);
            printf("|                                                                                                                                          |\n");
            printf("|------------------------------------------------------------------------------------------------------------------------------------------|\n");
            printf("|                                                                                                                                          |\n");
            printf("|    sec    |    2/%c4    |   2/%c3   |   2/%c2   |   2/%c1   |     %c    |   -2/%c1   |   -2/%c2   |   -2/%c3   |   -2/%c4   |    5/4    |   5/3   |\n",symbol,symbol,symbol,symbol,symbol1,symbol,symbol,symbol,symbol);
            printf("|                                                                                                                                          |\n");
            printf("|------------------------------------------------------------------------------------------------------------------------------------------|\n");
            
            
            printf("\nWe can help you finding the value of:\n\n1 Sinus\n2 Cosinus\n3 Tangent\n4 Cotangent\n5 Cosecant\n6 Secant\n7 Go Back\n");
            do{
                printf("Enter your number (ex: 1): ");
                scanf("%d", &sct);
            } while( sct != 1 && sct != 2 && sct != 3 && sct != 4 && sct != 5 && sct != 6 && sct != 7);

            if(sct == 7){
                clearScreen();
                asciiSincostan();
                menuSinCosTan();
            }

            do{
                printf("Enter the angle (ex: 30): ");
                scanf("%d",&anglesct);
            } while( anglesct != 0 && anglesct != 30 && anglesct != 45 && anglesct != 60 && anglesct != 90 && anglesct != 120 && anglesct != 135 && anglesct != 150 && anglesct != 180 && anglesct != 37 && anglesct != 53 );
           
            if ( sct == 1 ){
                if ( anglesct == 0){
                    printf("\nSin 0 is %c0/2\n",symbol);
                } else if( anglesct == 30){
                    printf("\nSin 30 is %c1/2\n",symbol);
                } else if( anglesct == 45){
                    printf("\nSin  45 is %c2/2\n",symbol);
                } else if( anglesct == 60){
                    printf("\nSin 60 is %c3/2\n",symbol);
                } else if( anglesct == 90){
                    printf("\nSin 90 is %c4/2\n",symbol);
                } else if( anglesct == 120){
                    printf("\nSin 120 is %c3/2\n",symbol);
                } else if( anglesct == 135){
                    printf("\nSin 135 is %c2/2\n",symbol);
                } else if( anglesct == 150){
                    printf("\nSin 150 is %c1/2\n",symbol);
                } else if( anglesct == 180){
                    printf("\nSin 180 is %c0/2\n",symbol);
                } else if( anglesct == 37){
                    printf("\nSin 37 is 3/5\n");
                } else if( anglesct == 53){
                    printf("\nSin 53 is 4/5\n");
                } else{
                    printf("Please enter angle that is in the table\n");
                }
            } else if ( sct == 2 ){
                if ( anglesct == 0){
                    printf("\nCos 0 is %c4/2\n",symbol);
                } else if( anglesct == 30){
                    printf("\nCos 30 is %c3/2\n",symbol);
                } else if( anglesct == 45){
                    printf("\nCos 45 is %c2/2\n",symbol);
                } else if( anglesct == 60){
                    printf("\nCos 60 is %c1/2\n",symbol);
                } else if( anglesct == 90){
                    printf("\nCos 90 is %c0/2\n",symbol);
                } else if( anglesct == 120){
                    printf("\nCos 120 is -%c1/2\n",symbol);
                } else if( anglesct == 135){
                    printf("\nCos 135 is -%c2/2\n",symbol);
                } else if( anglesct == 150){
                    printf("\nCos 150 is -%c3/2\n",symbol);
                } else if( anglesct == 180){
                    printf("\nCos 180 is -%c4/2\n",symbol);
                } else if( anglesct == 37){
                    printf("\nCos 37 is 4/5\n");
                } else if( anglesct == 53){
                    printf("\nCos 53 is 3/5\n");
                } else{
                    printf("Please enter angle that is in the table\n");
                }
            } else if ( sct == 3 ){
                if ( anglesct == 0){
                    printf("\nTan 0 is %c(0/4)\n",symbol);
                } else if( anglesct == 30){
                    printf("\nTan 30 is %c(1/3)\n",symbol);
                } else if( anglesct == 45){
                    printf("\nTan 45 is %c(2/2)\n",symbol);
                } else if( anglesct == 60){
                    printf("\nTan 60 is %c(3/1)\n",symbol);
                } else if( anglesct == 90){
                    printf("\nTan 90 is %c\n",symbol1);
                } else if( anglesct == 120){
                    printf("\nTan 120 is -%c(3/1)\n",symbol);
                } else if( anglesct == 135){
                    printf("\nTan 135 is -%c(2/2)\n",symbol);
                } else if( anglesct == 150){
                    printf("\nTan 150 is -%c(3/1)\n",symbol);
                } else if( anglesct == 180){
                    printf("\nTan 180 is -%c(0/4)\n",symbol);
                } else if( anglesct == 37){
                    printf("\nTan 37 is 3/4\n");
                } else if( anglesct == 53){
                    printf("\nTan 53 is 4/3\n");
                } else{
                    printf("Please enter angle that is in the table\n");
                }
            } else if ( sct == 4 ){
                if ( anglesct == 0){
                    printf("\nCotangent 0 is %c\n",symbol1);
                } else if( anglesct == 30){
                    printf("\nCotangent 30 is %c(3/1)\n",symbol);
                } else if( anglesct == 45){
                    printf("\nCotangent 45 is %c(2/2)\n",symbol);
                } else if( anglesct == 60){
                    printf("\nCotangent 60 is %c(1/3)\n",symbol);
                } else if( anglesct == 90){
                    printf("\nCotangent 90 is 0\n");
                } else if( anglesct == 120){
                    printf("\nCotangent 120 is -%c(1/3)\n",symbol);
                } else if( anglesct == 135){
                    printf("\nCotangent 135 is -%c(2/2)\n",symbol);
                } else if( anglesct == 150){
                    printf("\nCotangent 150 is -%c(3/1)\n",symbol);
                } else if( anglesct == 180){
                    printf("\nCotangent 180 is %c\n",symbol1);
                } else if( anglesct == 37){
                    printf("\nCotangent 37 is 4/3\n");
                } else if( anglesct == 53){
                    printf("\nCotangent 53 is 3/4\n");
                } else{
                    printf("Please enter angle that is in the table\n");
                }
            } else if ( sct == 5 ){
                if ( anglesct == 0){
                    printf("\nCosecant 0 is %c\n",symbol1);
                } else if( anglesct == 30){
                    printf("\nCosecant 30 is 2/%c1\n",symbol);
                } else if( anglesct == 45){
                    printf("\nCosecant 45 is 2/%c2\n",symbol);
                } else if( anglesct == 60){
                    printf("\nCosecant 60 is 2/%c3\n",symbol);
                } else if( anglesct == 90){
                    printf("\nCosecant 90 is 2/%c4\n",symbol);
                } else if( anglesct == 120){
                    printf("\nCosecant 120 is 2/%c3\n",symbol);
                } else if( anglesct == 135){
                    printf("\nCosecant 135 is 2/%c2\n",symbol);
                } else if( anglesct == 150){
                    printf("\nCosecant 150 is 2/%c1\n",symbol);
                } else if( anglesct == 180){
                    printf("\nCosecant 180 is %c\n",symbol1);
                } else if( anglesct == 37){
                    printf("\nCosecant 37 is 5/3\n");
                } else if( anglesct == 53){
                    printf("\nCosecant 53 is 5/4\n");
                } else{
                    printf("Please enter angle that is in the table\n");
                }
            } else if ( sct == 6 ){
                if ( anglesct == 0){
                    printf("\nSecant 0 is 2/%c4\n",symbol);
                } else if( anglesct == 30){
                    printf("\nSecant 30 is 2/%c3\n",symbol);
                } else if( anglesct == 45){
                    printf("\nSecant 45 is 2/%c2\n",symbol);
                } else if( anglesct == 60){
                    printf("\nSecant 60 is 2/%c1\n",symbol);
                } else if( anglesct == 90){
                    printf("\nSecant 90 is %c\n",symbol1);
                } else if( anglesct == 120){
                    printf("\nSecant 120 is -2/%c1\n",symbol);
                } else if( anglesct == 135){
                    printf("\nSecant 135 is -2/%c2\n",symbol);
                } else if( anglesct == 150){
                    printf("\nSecant 150 is -2/%c3\n",symbol);
                } else if( anglesct == 180){
                    printf("\nSecant 180 is -2/%c4\n",symbol);
                } else if( anglesct == 37){
                    printf("\nSecant 37 is 5/4\n");
                } else if( anglesct == 53){
                    printf("\nSecant 53 is 5/3\n");
                } else{
                    printf("Please enter angle that is in the table\n");
                }
            }
            printf("\nDo you want to use this function again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
            menuSinCosTan();
    }
    

}

void triangleSincostanLen(){
    int choosen=0;
        do{
            double a;
            double b;
            double c;

            puts("\t\t\t\n     	                C					");
            puts("\t             	|\\					");
            puts("\t     	        | \\				");
            puts("\t                |  \\				");
            puts("\t     	        |   \\				");
            puts("\t     	        |    \\				");
            puts("\t              a |     \\  b          ");
            puts("\t		|      \\			");	
            puts("\t		|\t\\			");
            puts("\t		|\t \\			");
            puts("\t	 	|\t  \\		");
            puts("\t	 	|__________\\		");
            puts("\t\t\tB     c     A		\n");

            printf("Use one of these functions:\n1 Sin\n2 Cos\n3 Tan\n4 Go Back\n");
            do{
                printf("\nWhich one do you want to use (enter the number): ");
                scanf("%d", &inputSinCosTansct);
            } while( inputSinCosTansct != 1 && inputSinCosTansct != 2 && inputSinCosTansct != 3 && inputSinCosTansct != 4);
            
            if( inputSinCosTansct == 4){
                clearScreen();
                asciiSincostan();
                menuSinCosTan();
            }

            do{
                printf("\nWhich one angle you do you want to use (A / B / C) : ");
                scanf("%s", &inputSinCosTanABC  );
            } while( inputSinCosTanABC != 'A' && inputSinCosTanABC != 'B' && inputSinCosTanABC != 'C');

            if ( inputSinCosTansct == 1 && inputSinCosTanABC == 'A' ){
                printf("The a and b length is (ex: 4 5): ");
                scanf("%lf %lf", &a, &b);
                printf("Sin A with %.2lf and %.2lf length is %.2lf.\n",a,b,a/b);
            } else if ( inputSinCosTansct == 1 && inputSinCosTanABC == 'B' ){
                printf("1\n");
                printf("Sin B is 1.\n");
            } else if ( inputSinCosTansct == 1 && inputSinCosTanABC == 'C' ){
                printf("The c and b length is (ex: 4 5): ");
                scanf("%lf %lf", &c, &b);
                printf("Sin C with %.2lf and %.2lf length is %.2lf.\n",c,b,c/b);
            } else if ( inputSinCosTansct == 2 && inputSinCosTanABC == 'A' ){
                printf("The c and b length is (ex: 4 5): ");
                scanf("%lf %lf", &c, &b);
                printf("Cos A with %.2lf and %.2lf length is %.2lf.\n",c,b,c/b);
            } else if ( inputSinCosTansct == 2 && inputSinCosTanABC == 'B' ){
                printf("Cos B is 0.\n");
                printf("Cos B is 0.\n");
            } else if ( inputSinCosTansct == 2 && inputSinCosTanABC == 'C' ){
                printf("The a and b length is (ex: 4 5): ");
                scanf("%lf %lf", &a, &b);
                printf("Cos C with %.2lf and %.2lf length is %.2lf.\n",a,b,a/b);
            } else if ( inputSinCosTansct == 3 && inputSinCosTanABC == 'A' ){
                printf("The a and c length is (ex: 4 5): ");
                scanf("%lf %lf", &a, &c);
                printf("Tan A with %.2lf and %.2lf length is %.2lf.\n",a,c,a/c);
            } else if ( inputSinCosTansct == 3 && inputSinCosTanABC == 'A' ){
                printf("Tan B is infinity.\n");
            } else if ( inputSinCosTansct == 3 && inputSinCosTanABC == 'C' ){
                printf("The c and a length is (ex: 4 5): ");
                scanf("%lf %lf", &c, &a);
                printf("Tan C with %.2lf and %.2lf length is %.2lf.\n",c,a,c/a);
            }
            
            printf("\n\nDo you want to the use trigonometry again? (enter number)\n1 Yes\n2 No\nEnter your number: ");
            scanf("%d",&choosen);

            clearScreen();
        } while(choosen==1);

    clearScreen();

    mainChoose();
    if(inputMenu != 8){
         menuSinCosTan();
    }
    
}

void menuSinCosTan(){
    
    printf("Here is what you can use to find Sin Cos Tan:\n1 Angle\t\t(Sudut)\n2 Length\t(panjang)\n3 Go Back\n\nEnter the number: ");
    scanf("%d", &inputMenuSinCosTan);
    clearScreen();

    if( inputMenuSinCosTan<=0 || inputMenuSinCosTan>3 ){
        clearScreen();
        printf("\nPlease enter number between 1-3.\n");
        asciiSincostan();
        menuSinCosTan();
    } else if( inputMenuSinCosTan == 1){
        triangleSincostanAng();
    } else if ( inputMenuSinCosTan == 2 ){
        triangleSincostanLen();
    } else if ( inputMenuSinCosTan == 3 ){
        mainMenu();
    }

}

void asciiSincostan(){
    printf("\n\n");
    printf("   _____ _____ _   _    _____ ____   _____   _______       _   _ \n");
    printf("  / ____|_   _| \\ | |  / ____/ __ \\ / ____| |__   __|/\\   | \\ | |\n");
    printf(" | (___   | | |  \\| | | |   | |  | | (___      | |  /  \\  |  \\| |\n");
    printf("  \\___ \\  | | | . ` | | |   | |  | |\\___ \\     | | / /\\ \\ | . ` |\n");
    printf("  ____) |_| |_| |\\  | | |___| |__| |____) |    | |/ ____ \\| |\\  |\n");
    printf(" |_____/|_____|_| \\_|  \\_\\____\\____/|_____/    |_/_/    \\_\\_| \\_|\n\n");
}

void asciiMainMenu(){
    printf("\n\n"); 
    printf("  _           _                  _      __  __       _   _     \n");
    printf(" | |         | |                | |    |  \\/  |     | | | |    \n");
    printf(" | |     __ _| |_ ___ _   _ _ __| | __ | \\  / | __ _| |_| |__  \n");
    printf(" | |    / _` | __/ __| | | | '__| |/ / | |\\/| |/ _` | __| '_ \\ \n");
    printf(" | |___| (_| | |_\\__ \\ |_| | |  |   <  | |  | | (_| | |_| | | | \n");
    printf(" |______\\__,_|\\__|___/\\\\__,|_|  |_|\\_\\ |_|  |_|\\__,_|\\__|_| |_|\n");
    printf("                       __/ |                                   \n");
    printf("                      |___/                                    \n");   
}

void asciiModulo(){
    printf("\n\n");
    printf(" __  __  ____  ____  __ __  _     ____ \n");
    printf("|  \\/  |/ () \\| _) \\|  |  || |__ / () \\\n");
    printf("|_|\\/|_|\\____/|____/ \\___/ |____|\\____/\n");
}

void asciiSqrt(){
    printf("\n\n");
    printf("  ____  ____  __ __  ____  _____  ____ _____  ____  ____  _____ \n");
    printf(" (_ (_`/ () \\|  |  |/ () \\ | () )| ===|| () )/ () \\/ () \\|_   _|\n");
    printf(".__)__)\\____/=\\___//__/\\__\\|_|\\_\\|____||_|\\_\\\\____/\\____/  |_|  \n");
}

void asciiPower(){
    printf("\n\n");
    printf("_____  ____ __    __ ____ _____ \n");
    printf("| ()_)/ () \\\\ \\/\\/ /| ===|| () )\n");
    printf("|_|   \\____/ \\_/\\_/ | ===||_|\\_\\ \n");
}

void asciiAdition(){
    printf("\n\n");
    printf("   ____   ____  ____  _  _____  _  ____  __  _ \n");
    printf("  / () \\ | _) \\| _) \\| ||_   _|| |/ () \\|  \\| |\n");
    printf(" /__/\\__\\|____/|____/|_|  |_|  |_|\\____/|_|\\__|\n");
}

void asciiSubtraction(){    
    printf("\n\n");
    printf("  ____  __ __ _____  _____ _____   ____   ____  _____  _  ____  __  _ \n");
    printf(" (_ (_`|  |  || () )|_   _|| () ) / () \\ / (__`|_   _|| |/ () \\|  \\| |\n");
    printf(".__)__) \\___/ |_()_)  |_|  |_|\\_\\/__/ \\__\\____)  |_|  |_|\\____/|_|\\__|\n");
}

void asciiDivision(){
    printf("\n\n");
    printf(" ____  _ __  __ _   ____  _  ____  __  _ \n");
    printf("| _) \\| |\\ \\/ /| | (_ (_`| |/ () \\|  \\| |\n");
    printf("|____/|_| \\__/ |_|.__)__)|_|\\____/|_|\\__|\n"); 
}

void asciiMultiplication(){
    printf("\n\n");
    printf(" __  __  __ __  _    _____  _ _____  _     _  ____   ____  _____  _  ____  __  _ \n");
    printf("|  \\/  ||  |  || |__|_   _|| || ()_)| |__ | |/ (__` / () \\|_   _|| |/ () \\|  \\| |\n");
    printf("|_|\\/|_| \\___/ |____| |_|  |_||_|   |____||_|\\____)/__/\\__\\ |_|  |_|\\____/|_|\\__|\n");
}

void asciiPolygon(){
    printf("\n\n");
    printf("  _____   _____         __   __  ______  _____  __   _\n");
    printf(" |_____] |     | |        \\_/   |  ____ |     | | \\  |\n");
    printf(" |       |_____| |_____    |    |_____| |_____| |  \\_|\n");
}

void asciiCircle(){
    printf("\n\n");
    printf(" _______ _____  ______ _______        _______\n");
    printf(" |         |   |_____/ |       |      |______\n");
    printf(" |_____  __|__ |    \\_ |_____  |_____ |______\n");
}

void asciiRhombus(){
    printf("\n\n");
    printf("  ______ _     _  _____  _______ ______  _     _ _______\n");
    printf(" |_____/ |_____| |     | |  |  | |_____] |     | |______\n");
    printf(" |    \\_ |     | |_____| |  |  | |_____] |_____| ______|\n");
}

void asciiKite(){
    printf("\n\n");
    printf(" _     _ _____ _______ _______\n");
    printf(" |____/    |      |    |______\n");
    printf(" |    \\_ __|__    |    |______\n");
}

void asciiParallelogram(){
    printf("\n\n");
    printf("  _____  _______  ______ _______               _______         _____   ______  ______ _______ _______\n");
    printf(" |_____] |_____| |_____/ |_____| |      |      |______ |      |     | |  ____ |_____/ |_____| |  |  |\n");
    printf(" |       |     | |    \\_ |     | |_____ |_____ |______ |_____ |_____| |_____| |    \\_ |     | |  |  |\n");
}

void asciiTrapezoid(){
    printf("\n\n");
    printf(" _______  ______ _______  _____  _______ ______  _____  _____ ______ \n");
    printf("    |    |_____/ |_____| |_____] |______  ____/ |     |   |   |     \\\n");
    printf("    |    |    \\_ |     | |       |______ /_____ |_____| __|__ |_____/\n");
}

void asciiTriangle(){
    printf("\n\n");
    printf(" _______  ______ _____ _______ __   _  ______        _______\n");
    printf("    |    |_____/   |   |_____| | \\  | |  ____ |      |______\n");
    printf("    |    |    \\_ __|__ |     | |  \\_| |_____| |_____ |______\n");
}

void asciiRectangle(){
    printf("\n\n");
    printf("  ______ _______ _______ _______ _______ __   _  ______        _______\n");
    printf(" |_____/ |______ |          |    |_____| | \\  | |  ____ |      |______\n");
    printf(" |    \\_ |______ |_____     |    |     | |  \\_| |_____| |_____ |______\n");
}

void asciiSquare(){
    printf("\n\n");
    printf(" _______  _____  _     _ _______  ______ _______\n");
    printf(" |______ |   __| |     | |_____| |_____/ |______\n");
    printf(" ______| |____\\| |_____| |     | |    \\_ |______\n");
}

void asciiCone(){
    printf("\n\n");
    printf(" ______     ______     __   __     ______    \n");
    printf("/\\  ___\\   /\\  __ \\   /\\  -.\\ \\   /\\  ___\\   \n");
    printf("\\ \\ \\____  \\ \\ \\/\\ \\  \\ \\ \\-.  \\  \\ \\  __\\   \n");
    printf(" \\ \\_____\\  \\ \\_____\\  \\ \\_\\ \\_ \\  \\ \\_____\\ \n");
    printf("  \\/_____/   \\/_____/   \\/_/ \\/_/   \\/_____/ \n");
}

void asciiPyramid(){      
    printf("\n\n");
    printf(" ______   __  __     ______     ______     __    __     __     _____    \n");
    printf("/\\  == \\ /\\ \\_\\ \\   /\\  == \\   /\\  __ \\   /\\ ""-./  \\    /\\ \\   /\\  __-.  \n");
    printf("\\ \\  _-/ \\ \\____ \\  \\ \\  __<   \\ \\  __ \\  \\ \\ \\-./\\ \\  \\ \\ \\  \\ \\ \\/\\ \\ \n");
    printf(" \\ \\_\\    \\/\\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\_\\  \\ \\_\\ \\ \\_\\  \\ \\_\\  \\ \\____- \n");
    printf("  \\/_/     \\/_____/   \\/_/ /_/   \\/_/\\/_/   \\/_/  \\/_/   \\/_/   \\/____/ \n"); 
}

void asciitriangularPrism(){
    printf("\n\n");
    printf(" ______   ______     __     ______     __    __       \n");
    printf("/\\  == \\ /\\  == \\   /\\ \\   /\\  ___\\   /\\ ""-./   \\      \n");
    printf("\\ \\  _-/ \\ \\  __<   \\ \\ \\  \\ \\___  \\  \\ \\ \\-./\\ \\     \n");
    printf(" \\ \\_\\    \\ \\_\\ \\_\\  \\ \\_\\  \\/\\_____\\  \\ \\_\\ \\ \\_\\    \n");
    printf("  \\/_/     \\/_/ /_/   \\/_/   \\/_____/   \\/_/  \\/_/    \n");  
}

void asciiCylinder(){
    printf("\n\n");
    printf(" ______     __  __     __         __     __   __     _____     ______     ______    \n");
    printf("/\\  ___\\   /\\ \\_\\ \\   /\\ \\       /\\ \\   /\\  -.\\ \\   /\\  __-.  /\\  ___\\   /\\  == \\   \n");
    printf("\\ \\ \\____  \\ \\____ \\  \\ \\ \\____  \\ \\ \\  \\ \\ \\-.  \\  \\ \\ \\/\\ \\ \\ \\  __\\   \\ \\  __<   \n");
    printf(" \\ \\_____\\  \\/\\_____\\  \\ \\_____\\  \\ \\_\\  \\ \\_\\\\ \\_\\  \\ \\____-  \\ \\_____\\  \\ \\_\\ \\_\\ \n");
    printf("  \\/_____/   \\/_____/   \\/_____/   \\/_/   \\/_\\/ \\/_/  \\/____/   \\/_____/   \\/_/ /_/ \n");  
}

void asciiSphere(){
    printf("\n\n");
    printf(" ______     ______   __  __     ______     ______     ______    \n");
    printf("/\\  ___\\   /\\  == \\ /\\ \\_\\ \\   /\\  ___\\   /\\  == \\   /\\  ___\\   \n");
    printf("\\ \\___  \\  \\ \\  _-/ \\ \\  __ \\  \\ \\  __\\   \\ \\  __<   \\ \\  __\\   \n");
    printf(" \\/\\_____\\  \\ \\_\\    \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_____\\ \n");
    printf("  \\/_____/   \\/_/     \\/_/\\/_/   \\/_____/   \\/_/ /_/   \\/_____/ \n");  
}

void asciiBlock(){
    printf("\n\n");
    printf(" ______     __         ______     ______     __  __    \n");
    printf("/\\  == \\   /\\ \\       /\\  __ \\   /\\  ___\\   /\\ \\/ /    \n");
    printf("\\ \\  __<   \\ \\ \\____  \\ \\ \\/\\ \\  \\ \\ \\____  \\ \\  _-.  \n");
    printf(" \\ \\_____\\  \\ \\_____\\  \\ \\_____\\  \\ \\_____\\  \\ \\_\\ \\_\\ \n");
    printf("  \\/_____/   \\/_____/   \\/_____/   \\/_____/   \\/_/\\/_/ \n");
}

void asciiCube(){
    printf("\n\n");
    printf(" ______     __  __     ______     ______    \n");
    printf("/\\  ___\\   /\\ \\/\\ \\   /\\  == \\   /\\  ___\\   \n");
    printf("\\ \\ \\____  \\ \\ \\_\\ \\  \\ \\  __<   \\ \\  __\\   \n");
    printf(" \\ \\_____\\  \\ \\_____\\  \\ \\_____\\  \\ \\_____\\ \n");
    printf("  \\/_____/   \\/_____/   \\/_____/   \\/_____/ \n");
}

void asciiGoodBye(){
    printf("\n\n\n");
    printf("           _______  _______  _______  ______     ______            _______            _           _________          _______  _        _        _______            _           \n"); delay();
    printf("          (  ____ \\(  ___  )(  ___  )(  __  \\   (  ___ \\ |\\     /|(  ____ \\          ( )          \\__   __/|\\     /|(  ___  )( (    /|| \\    /\\(  ____ \\          ( )          \n");delay();
    printf("          | (    \\/| (   ) || (   ) || (  \\  )  | (   ) )( \\   / )| (    \\/          | |             ) (   | )   ( || (   ) ||  \\  ( ||  \\  / /| (    \\/          | |          \n");delay();
    printf("          | |      | |   | || |   | || |   ) |  | (__/ /  \\ (_) / | (__              | |             | |   | (___) || (___) ||   \\ | ||  (_/ / | (_____           | |          \n");delay();
    printf("          | | ____ | |   | || |   | || |   | |  |  __ (    \\   /  |  __)             | |             | |   |  ___  ||  ___  || (\\ \\) ||   _ (  (_____  )          | |          \n");delay();
    printf("          | | \\_  )| |   | || |   | || |   ) |  | (  \\ \\    ) (   | (                (_)             | |   | (   ) || (   ) || | \\   ||  ( \\ \\       ) |          (_)          \n");delay();
    printf("          | (___) || (___) || (___) || (__/  )  | )___) )   | |   | (____/\\           _              | |   | )   ( || )   ( || )  \\  ||  /  \\ \\/\\____) |           _           \n");delay();
    printf("          (_______)(_______)(_______)(______/   |/ \\___/    \\_/   (_______/          (_)             )_(   |/     \\||/     \\||/    )_)|_/    \\/\\_______)          (_)          \n");delay();
    printf("\n\n                                                                                                                                                                 -Dierta P         \n");delay();
    
    printf("\n\n\n");
}

void clearScreen(){
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

void delay(){ 
    for (int i=0; i<2e8; i++){
         
    } 
}