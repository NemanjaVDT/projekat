#include<iostream>
#include<fstream>
#include<string>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
ofstream Ime, Prezime, Korisnicko, god_rodj, meil, Lozinka, Pol;
ifstream imE, prezimE, korisnickO, Meil, lozinkA, mejl;
int main(){
	cout<<"\t DOBRODOSLI!"<<endl;
	cout<<"[1] Prijavite se\n[2] Napravite nalog\n[3] Izadji"<<endl;
	int a;
	cin>>a;
		if(a==2){
			system("COLOR f0");;
		string ime, prezime;
		cout<<"Unesite ime: "<<ends;
		Ime.open("ime.txt");
		cin>>ime;
		Ime<<ime;
		Ime.close();
		cout<<"Unesite prezime: "<<ends;
		Prezime.open("prezime.txt");
		cin>>prezime;
		Prezime<<prezime;
		Prezime.close();
		string kor_ime;
		cout<<"Unesite korisnicko ime: "<<ends;
		Korisnicko.open("korisnicko.txt");
		cin>>kor_ime;
		Korisnicko<<kor_ime;
		Korisnicko.close();
		int pol;
		cout<<"Vi ste: "<<endl;
		cout<<"[1] musko\n[2] zensko"<<endl;
		Pol.open("pol.txt");
		string pl;
		cin>>pol;
		if(pol==1){
			pl="musko";
			Pol<<pl;
		}
		else if(pol==2){
			pl="zensko";
			Pol<<pl;
		}
		Pol.close();
		int b, c, d;
		char q;
		char w;
		char y;
		cout<<"Unesite datum rodjenja"<<endl;
		god_rodj.open("datum rodjenja.txt");
		cin>>b>>q>>c>>w>>d>>y;
		god_rodj<<b<<q<<c<<w<<d<<y;
		god_rodj.close();
		if(d<=2009){
			cout<<"Unesite email: "<<ends;
			string mail;
			meil.open("mail.txt");
			cin>>mail;
			meil<<mail;
			meil.close();
			string email;
			cout<<"Ponovo unesite email : "<<ends;
			cin>>email;
			if(mail!=email){
	 			cout<<"Emailovi vam se ne poklapaju. Molimo vas, pokusajte ponovo"<<endl;
	 			cout<<"Unesite email : "<<ends;
	 			cin>>mail;
	 			cout<<"Ponovo unesite email: "<<ends;
	 		}
	 		else if(mail==email){
		 		cout<<"Unesite lozinku: (minimalno 7karaktera)"<<ends;
				string lozinka;
				Lozinka.open("lozinka.txt");
				int g=7;
				cin>>lozinka;
				if(g>lozinka.length()){
					cout<<"Vasa lozinka je prekratka. Molimo Vas da smislite duzu:"<<endl;
					cin>>lozinka;
					if(g<lozinka.length()){
						Lozinka<<lozinka;
						Lozinka.close();
						cout<<"Ponovo unesite lozinku: "<<ends;
     					string  login;
						cin>>login;
						cout<<endl;
						if(lozinka==login){
						system("cls");
						system("COLOR 07");
						cout<<"Uspesna registracija"<<endl;
						cout<<endl;
						cout<<endl;
						return main();	
					}
				}
					else if(g>lozinka.length()){
						system("COLOR 07");
						system("cls");
						cout<<"Zapocnite registraciju od pocetka."<<endl;
						cout<<endl;cout<<endl;cout<<endl;
						return main();
					}
			}
			else if(g<lozinka.length()){
				Lozinka<<lozinka;
				Lozinka.close();
				cout<<"Ponovo unesite lozinku: "<<ends;
     			string  login;
				cin>>login;
				cout<<endl;
				if(lozinka==login){
				system("cls");
				system("COLOR 07");
				cout<<"Uspesna registracija"<<endl;
				cout<<endl;
				cout<<endl;
				return main();	
			}
	 		 		else if(lozinka!=login){
		 			cout<<"Lozinke vam se ne poklapaju. Molimo vas, pokusajte ponovo"<<endl;
    				string lozinka;
    				string login;
		 			cout<<"Unesite lozinku(minimalno 7karaktera): "<<ends;
		 			cin>>lozinka;
		 				if(g>lozinka.length()){
					cout<<"Vasa lozinka je prekratka. Molimo Vas da smislite duzu:"<<endl;
					cin>>lozinka;
					if(g>lozinka.length()){
						system("COLOR 07");
						system("cls");
						cout<<"Zapocnite registraciju od pocetka."<<endl;
						cout<<endl;cout<<endl;cout<<endl;
						return main();
					}
					else if(g<lozinka.length()){
						Lozinka<<lozinka;
						Lozinka.close();
						cout<<"Ponovo unesite lozinku: "<<ends;
     					string  login;
						cin>>login;
						cout<<endl;
						if(lozinka!=login){
		 				system("cls");
		 				cout<<"Doslo je do greske, probajte ponovo"<<endl;
		 				system("COLOR 07");
		 				return main();
					 	}
						else if(lozinka==login){
						system("cls");
						system("COLOR 07");
						cout<<"Uspesna registracija"<<endl;
						cout<<endl;
						cout<<endl;
						return main();	
					}
				}
			}
			else{
				Lozinka<<lozinka;
				Lozinka.close();
				cout<<"Ponovo unesite lozinku: "<<ends;
     			string  login;
				cin>>login;
				cout<<endl;
				if(lozinka!=login){
		 				system("cls");
		 				cout<<"Doslo je do greske, probajte ponovo"<<endl;
		 				system("COLOR 07");
		 				return main();
				}
				else if(lozinka==login){
				system("cls");
				system("COLOR 07");
				cout<<"Uspesna registracija"<<endl;
				cout<<endl;
				cout<<endl;
				return main();	
			}
					else{
						cout<<"Uspesno ste se registrovali"<<endl;
					} 
		 		}
		 		return main();
		 		}
		}
	}
}}
	else if(a==1){
		string mail, MEJL, LOZINKA; 
		Meil.open("mail.txt");
		Meil>>MEJL;
		lozinkA.open("lozinka.txt");
		lozinkA>>LOZINKA;
		cout<<"Unesite email: "<<ends;
		cin>>mail;
		if(mail!=MEJL){
			cout<<"E-mailovi Vam se ne poklapaju. Molimo Vas da probate ponovo."<<endl;
			cout<<"Unesite email: "<<ends;
			cin>>mail;
			if(mail!=MEJL){
				system("cls");
				cout<<"Vas e-mail ne postoji. Molimo Vas da prvo napravite nalog"<<endl;
				cout<<endl;
				cout<<endl;
				return main();
			}
			else{
				cout<<"[1] Unesite lozinku\n[2] Zaboravio sam lozinku"<<ends;
				int W;
				cin>>W;
				if(W==1){
					string login;
			    cin>>login;
			    if(login!=LOZINKA){
			    	cout<<"Lozinke Vam se ne poklapaju. Molimo Vas da probate ponovo."<<endl;
			    	cout<<"Unesite lozinku: "<<ends;
					string login;
			    	cin>>login;
			    	if(login!=LOZINKA){
			    		system("cls");
			    		cout<<"Lozinke Vam se ne poklapaju. Molimo Vas da pocnete ispocetka."<<endl;
			    		cout<<endl;
			    		cout<<endl;
			    		return main();
					}
					else{
						string IME, PREZIME, KORISNICKO;
			    imE.open("ime.txt");
			 	imE>>IME;
	  	 		prezimE.open("prezime.txt");
			    prezimE>>PREZIME;
			    korisnickO.open("korisnicko.txt");
			    korisnickO>>KORISNICKO;
				system("cls");
				cout<<"Dobrodosli,"<<IME<<" "<<PREZIME<<endl;
				cout<<KORISNICKO<<endl;
					time_t my_time = time(NULL);  
			    printf("%s", ctime(&my_time)); 
				cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
				system("COLOR B0");
				cout<<"[1] Slusaj muziku\n[2] Pricaj/Dopisuj se sa ljudima\n[3] Napusti stranicu"<<endl;
					cin>>a;
					if(a==1){
						ShellExecute(NULL, "open", "file:///F:/web/igrice/index.html",
                			NULL, NULL, SW_SHOWNORMAL);
						/*int pesma;
						cout<<"Dostupne pesme:\n[1] Dead Memories-Slipknot\n[2] Vermilion 2-Slipknot"<<endl;
						cin>>pesma;
						if(pesma==1){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=9gsAz6S_zSw&list=RD9gsAz6S_zSw&start_radio=1",
                			NULL, NULL, SW_SHOWNORMAL);
                			}
						else if(pesma==2){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=LvetJ9U_tVY&list=RD9gsAz6S_zSw&index=13",
                			NULL, NULL, SW_SHOWNORMAL);
						}*/
					}
					else if(a==2){
						ShellExecute(NULL, "open", "file:///F:/web/drustvena mreza/index.html",NULL, NULL, SW_SHOWNORMAL);
					}
					else if(a==3){
						cout<<"Svratite ponovo."<<endl;
						cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
					}
				imE.close();
				prezimE.close();
				korisnickO.clear();
					}
				}
				else{
					string IME, PREZIME, KORISNICKO;
				    imE.open("ime.txt");
				 	imE>>IME;
	  	 			prezimE.open("prezime.txt");
				    prezimE>>PREZIME;
				    korisnickO.open("korisnicko.txt");
				    korisnickO>>KORISNICKO;
					system("cls");
					cout<<"Dobrodosli,"<<IME<<" "<<PREZIME<<endl;
					cout<<KORISNICKO<<endl;
						time_t my_time = time(NULL);  
				    printf("%s", ctime(&my_time)); 
					cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
					system("COLOR B0");
					cout<<"[1] Slusaj muziku\n[2] Pricaj/Dopisuj se sa ljudima\n[3] Napusti stranicu"<<endl;
					cin>>a;
					if(a==1){
						ShellExecute(NULL, "open", "file:///F:/web/igrice/index.html",
                			NULL, NULL, SW_SHOWNORMAL);
						/*int pesma;
						cout<<"Dostupne pesme:\n[1] Dead Memories-Slipknot\n[2] Vermilion 2-Slipknot"<<endl;
						cin>>pesma;
						if(pesma==1){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=9gsAz6S_zSw&list=RD9gsAz6S_zSw&start_radio=1",
                			NULL, NULL, SW_SHOWNORMAL);
                			}
						else if(pesma==2){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=LvetJ9U_tVY&list=RD9gsAz6S_zSw&index=13",
                			NULL, NULL, SW_SHOWNORMAL);
						}*/
					}
					else if(a==2){
						ShellExecute(NULL, "open", "file:///F:/web/drustvena mreza/index.html",NULL, NULL, SW_SHOWNORMAL);
					}
					else if(a==3){
						cout<<"Svratite ponovo."<<endl;
						cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
					}
					imE.close();
					prezimE.close();
					korisnickO.clear();
				}
				}
				else if(W==2){
					string lozinka, login;
					cout<<"Unesite novi lozinku(minimalno 7 karaktera): "<<ends;
					cin>>lozinka;
					Lozinka.open("lozinka.txt");
					Lozinka<<lozinka;
					Lozinka.close();
					cout<<"Ponovo unesite novu lozinku: "<<ends;
					cin>>login;
					if(lozinka==login){
						cout<<"Uspesno ste promenili loznku \n\n\n"<<endl;
						system("cls");
						return main();
					}
					else{
						cout<<"Lozinke Vam se ne poklapaju. Unesite novu lozinku: "<<ends;
						cin>>lozinka;
						cout<<"Ponovo unesite novu lozinku:"<<ends;
						cin>>login;
						if(lozinka==login){
							cout<<"Uspesno ste promenili loznku \n\n\n"<<endl;
							system("cls");
							return main();
						}
						else{
							cout<<"Pocnite od pocetka."<<endl;
							system("cls");
							return main();
						}
					}
				}
			}
		}
		else{
			cout<<"[1] Unesite lozinku\n[2] Zaboravio sam lozinku"<<ends;
				int W;
				cin>>W;
				if(W==1){
					string login;
			    cin>>login;
			    if(login!=LOZINKA){
			    	cout<<"Lozinke Vam se ne poklapaju. Molimo Vas da probate ponovo."<<endl;
			    	cout<<"Unesite lozinku: "<<ends;
					string login;
			    	cin>>login;
			    	if(login!=LOZINKA){
			    		system("cls");
			    		cout<<"Lozinke Vam se ne poklapaju. Molimo Vas da pocnete ispocetka."<<endl;
			    		cout<<endl;
			    		cout<<endl;
			    		return main();
					}
					else{
						string IME, PREZIME, KORISNICKO;
			    imE.open("ime.txt");
			 	imE>>IME;
	  	 		prezimE.open("prezime.txt");
			    prezimE>>PREZIME;
			    korisnickO.open("korisnicko.txt");
			    korisnickO>>KORISNICKO;
				system("cls");
				cout<<"Dobrodosli,"<<IME<<" "<<PREZIME<<endl;
				cout<<KORISNICKO<<endl;
					time_t my_time = time(NULL);  
			    printf("%s", ctime(&my_time)); 
				cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
				system("COLOR B0");
				cout<<"[1] Slusaj muziku\n[2] Pricaj/Dopisuj se sa ljudima\n[3] Napusti stranicu"<<endl;
					cin>>a;
					if(a==1){
						ShellExecute(NULL, "open", "file:///F:/web/igrice/index.html",
                			NULL, NULL, SW_SHOWNORMAL);
						/*int pesma;
						cout<<"Dostupne pesme:\n[1] Dead Memories-Slipknot\n[2] Vermilion 2-Slipknot"<<endl;
						cin>>pesma;
						if(pesma==1){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=9gsAz6S_zSw&list=RD9gsAz6S_zSw&start_radio=1",
                			NULL, NULL, SW_SHOWNORMAL);
                			}
						else if(pesma==2){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=LvetJ9U_tVY&list=RD9gsAz6S_zSw&index=13",
                			NULL, NULL, SW_SHOWNORMAL);
						}*/
					}
					else if(a==2){
						ShellExecute(NULL, "open", "file:///F:/web/drustvena mreza/index.html",NULL, NULL, SW_SHOWNORMAL);
					}
					else if(a==3){
						cout<<"Svratite ponovo."<<endl;
						cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
					}
				imE.close();
				prezimE.close();
				korisnickO.clear();
					}
				}
				else{
					string IME, PREZIME, KORISNICKO;
				    imE.open("ime.txt");
				 	imE>>IME;
	  	 			prezimE.open("prezime.txt");
				    prezimE>>PREZIME;
				    korisnickO.open("korisnicko.txt");
				    korisnickO>>KORISNICKO;
					system("cls");
					cout<<"Dobrodosli,"<<IME<<" "<<PREZIME<<endl;
					cout<<KORISNICKO<<endl;
						time_t my_time = time(NULL);  
				    printf("%s", ctime(&my_time)); 
					cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
					system("COLOR B0");
					cout<<"[1] Slusaj muziku\n[2] Pricaj/Dopisuj se sa ljudima\n[3] Napusti stranicu"<<endl;
					cin>>a;
					if(a==1){
						ShellExecute(NULL, "open", "file:///F:/web/igrice/index.html",
                			NULL, NULL, SW_SHOWNORMAL);
						/*int pesma;
						cout<<"Dostupne pesme:\n[1] Dead Memories-Slipknot\n[2] Vermilion 2-Slipknot"<<endl;
						cin>>pesma;
						if(pesma==1){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=9gsAz6S_zSw&list=RD9gsAz6S_zSw&start_radio=1",
                			NULL, NULL, SW_SHOWNORMAL);
                			}
						else if(pesma==2){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=LvetJ9U_tVY&list=RD9gsAz6S_zSw&index=13",
                			NULL, NULL, SW_SHOWNORMAL);
						}*/
					}
					else if(a==2){
						ShellExecute(NULL, "open", "file:///F:/web/drustvena mreza/index.html",NULL, NULL, SW_SHOWNORMAL);
					}
					else if(a==3){
						cout<<"Svratite ponovo."<<endl;
						cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
					}
					imE.close();
					prezimE.close();
					korisnickO.clear();
				}
				}
				else if(W==2){
					string lozinka, login;
					cout<<"Unesite novi lozinku(minimalno 7 karaktera): "<<ends;
					cin>>lozinka;
					Lozinka.open("lozinka.txt");
					Lozinka<<lozinka;
					Lozinka.close();
					cout<<"Ponovo unesite novu lozinku: "<<ends;
					cin>>login;
					if(lozinka==login){
						cout<<"Uspesno ste promenili loznku \n\n\n"<<endl;
						system("cls");
						return main();
					}
					else{
						cout<<"Lozinke Vam se ne poklapaju. Unesite novu lozinku: "<<ends;
						cin>>lozinka;
						cout<<"Ponovo unesite novu lozinku:"<<ends;
						cin>>login;
						if(lozinka==login){
							cout<<"Uspesno ste promenili loznku \n\n\n"<<endl;
							system("cls");
							return main();
						}
						else{
							cout<<"Pocnite od pocetka."<<endl;
							system("cls");
							return main();
						}
					}
			/*string login;
		    cin>>login;
		    if(login!=LOZINKA){
			    	cout<<"Lozinke Vam se ne poklapaju. Molimo Vas da probate ponovo."<<endl;
			    	cout<<"Unesite lozinku: "<<ends;
					string login;
			    	cin>>login;
			    	if(login!=LOZINKA){
			    		system("cls");
			    		cout<<"Lozinke Vam se ne poklapaju. Molimo Vas da pocnete ispocetka."<<endl;
			    		cout<<endl;
			    		cout<<endl;
					}
					else{
						string IME, PREZIME, KORISNICKO;
			    imE.open("ime.txt");
			 	imE>>IME;
	  	 		prezimE.open("prezime.txt");
			    prezimE>>PREZIME;
			    korisnickO.open("korisnicko.txt");
			    korisnickO>>KORISNICKO;
				system("cls");
				cout<<"Dobrodosli,"<<IME<<" "<<PREZIME<<endl;
				cout<<KORISNICKO<<endl;
					time_t my_time = time(NULL);  
			    printf("%s", ctime(&my_time)); 
				cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
				system("COLOR B0");
				cout<<"[1] Slusaj muziku\n[2] Pricaj/Dopisuj se sa ljudima\n[3] Napusti stranicu"<<endl;
					cin>>a;
					if(a==1){
						ShellExecute(NULL, "open", "file:///F:/web/igrice/index.html",
                			NULL, NULL, SW_SHOWNORMAL);
						/*int pesma;
						cout<<"Dostupne pesme:\n[1] Dead Memories-Slipknot\n[2] Vermilion 2-Slipknot"<<endl;
						cin>>pesma;
						if(pesma==1){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=9gsAz6S_zSw&list=RD9gsAz6S_zSw&start_radio=1",
                			NULL, NULL, SW_SHOWNORMAL);
                			}
						else if(pesma==2){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=LvetJ9U_tVY&list=RD9gsAz6S_zSw&index=13",
                			NULL, NULL, SW_SHOWNORMAL);
						}*/
					}
					else if(a==2){
						ShellExecute(NULL, "open", "file:///F:/web/drustvena mreza/index.html",NULL, NULL, SW_SHOWNORMAL);
					}
					else if(a==3){
						cout<<"Svratite ponovo."<<endl;
						cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
					}
				imE.close();
				prezimE.close();
				korisnickO.clear();
					}
				}
				else{
					string IME, PREZIME, KORISNICKO;
				    imE.open("ime.txt");
				 	imE>>IME;
	  	 			prezimE.open("prezime.txt");
				    prezimE>>PREZIME;
				    korisnickO.open("korisnicko.txt");
				    korisnickO>>KORISNICKO;
					system("cls");
					cout<<"Dobrodosli,"<<IME<<" "<<PREZIME<<endl;
					cout<<KORISNICKO<<endl;
						time_t my_time = time(NULL);  
				    printf("%s", ctime(&my_time)); 
					cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
					system("COLOR B0");
					cout<<"[1] Slusaj muziku\n[2] Pricaj/Dopisuj se sa ljudima\n[3] Napusti stranicu"<<endl;
					cin>>a;
					if(a==1){
						ShellExecute(NULL, "open", "file:///F:/web/igrice/index.html",
                			NULL, NULL, SW_SHOWNORMAL);
						/*int pesma;
						cout<<"Dostupne pesme:\n[1] Dead Memories-Slipknot\n[2] Vermilion 2-Slipknot"<<endl;
						cin>>pesma;
						if(pesma==1){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=9gsAz6S_zSw&list=RD9gsAz6S_zSw&start_radio=1",
                			NULL, NULL, SW_SHOWNORMAL);
                			}
						else if(pesma==2){
							cout<<"Prebacujemo Vas."<<endl;
							cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
							ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=LvetJ9U_tVY&list=RD9gsAz6S_zSw&index=13",
                			NULL, NULL, SW_SHOWNORMAL);
						}
					}
					else if(a==2){
						ShellExecute(NULL, "open", "file:///F:/web/drustvena mreza/index.html",NULL, NULL, SW_SHOWNORMAL);
					}
					else if(a==3){
						cout<<"Svratite ponovo."<<endl;
						cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
					}
					imE.close();
					prezimE.close();
					korisnickO.clear();
				*/}
			}
		}
		else if(a==3){
			cout<<"U redu. Svratite ponovo"<<endl;
			return 0;
		}
}
