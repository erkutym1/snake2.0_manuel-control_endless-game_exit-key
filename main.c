#include<stdio.h>
#include<math.h>
#include<time.h>



int main()
{
	//9x9 tahta yilan oyunu


	int hedefSatir,hedefSutun;
	int konumsatir,konumsutun;
	char komut;
	char tablo[9][9];



	for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            tablo[i][j]='*';
        }
    }

	srand(time(NULL));



	while (hedefSatir==konumsatir || hedefSutun==konumsutun)
    {
       	hedefSatir = rand()%9;
        hedefSutun = rand()%9;

        konumsatir = rand()%9;
        konumsutun = rand()%9;
    }

        tablo[konumsatir][konumsutun]='X';
        tablo[hedefSatir][hedefSutun]='o';

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                printf("%c ", tablo[i][j]);
            }
            printf("\n");
        }

    int sayac=0;

    while (hedefSatir!=konumsatir || hedefSutun!=konumsutun)
    {


        printf("control:WASD or E:exit\n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        komut = getche();

        if(komut=='e' || komut=='E')
            break;

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        if(komut=='W' || komut=='w')
        {
            if(konumsatir>0)
                konumsatir--;
        }

        else if(komut=='A' || komut=='a')
        {
            if(konumsutun>0)
                konumsutun--;
        }

        else if(komut=='S' || komut=='s')
        {
            if(konumsatir<8)
                konumsatir++;
        }

        else if(komut=='D' || komut=='d')
        {
            if(konumsutun<8)
                konumsutun++;

        }



       for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                tablo[i][j]='*';
            }
        }


        tablo[konumsatir][konumsutun]='X';
        tablo[hedefSatir][hedefSutun]='o';


        if(konumsatir==hedefSatir && konumsutun==hedefSutun)
        {

            sayac++;

            tablo[konumsatir][konumsutun]='X';

        	while (hedefSatir==konumsatir || hedefSutun==konumsutun)
        {
            hedefSatir = rand()%9;
            hedefSutun = rand()%9;
        }

            tablo[hedefSatir][hedefSutun]='o';
        }


        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                printf("%c ", tablo[i][j]);
            }
            printf("\n");
        }



        if(konumsatir==hedefSatir && konumsutun==hedefSutun)
        {



        	while (hedefSatir==konumsatir || hedefSutun==konumsutun)
        {
            hedefSatir = rand()%9;
            hedefSutun = rand()%9;
        }

        }


    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    if(sayac>0)
    {

    printf("_______ _______ __   ___ _______ _______ _______ _______ _______\n");
    printf("| ____| | ___ | | \\  | | | ____| | ___ | | ___ | |__ __| | ____|\n");
    printf("| |     | | | | |  \\ | | | |____ | |_| | | |_| |   | |   | |____\n");
    printf("| |     | | | | |   \\| | | ||_ | |  ___| | ___ |   | |   | ___ |\n");
    printf("| |     | | | | | |\\   | | | | | |   \\   | | | |   | |   ___ | |\n");
    printf("| |____ | |_| | | | \\  | | |_| | | |\\ \\  | | | |   | |   | |_| |\n");
    printf("|_____| |_____| |_|  \\_| |_____| |_| \\_\\ |_| |_|   |_|   |_____|\n");

    }

    else if(sayac==0)
    {

      printf("_______ _______ ___ ___\n");
      printf("|__ __| | ___ | | | | |\n");
      printf("  | |   | |_| | | |_| |\n");
      printf("  | |   |  ___| |____ |\n");
      printf("  | |   |   \\   ___ | |\n");
      printf("  | |   | |\\ \\  | |_| |\n");
      printf("  |_|   |_| \\_\\ |_____|\n");
      printf("\n");
      printf("_______ _______ _______ ___ __   ___\n");
      printf("| ___ | | ____| | ___ | | | | \\  | |\n");
      printf("| |_| | | |____ | |_| | | | |  \\ | |\n");
      printf("| ___ | | ||_ | | ___ | | | |   \\| | \n");
      printf("| | | | | | | | | | | | | | | |\\   |\n");
      printf("| | | | | |_| | | | | | | | | | \\  |\n");
      printf("|_| |_| |_____| |_| |_| |_| |_|  \\_|\n");







    }











    printf("PUAN: %d",sayac);

    printf("\n\n\n\n\n\n\n\n\n\n");

	return 0;
}
