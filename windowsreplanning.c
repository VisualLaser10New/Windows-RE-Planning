#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int menu, codice;
	do{	
		printf("Welcome to Windows\xA9 RE Planning.\nPlease start me as Admin, otherwise I cannot work properly.\nKeep: 1 enable, 0 disable.\n");
		printf("This software work with Windows\xA9 10/8.1/8/7, but not with all builds.\n");
		printf("Enter:\n1- Start\n2- Help\n3- Exit\n");
		scanf("%i",&menu);
		
		
		switch(menu){
			
			case 1://the codes will insert
			
				printf("Insert a code:");
				scanf("%i",&codice);
				
				//switch to select the operation base code
				switch(codice){
					case 11111:
						//immersive search
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Search /v ImmersiveSearch /t REG_DWORD /d 00000001 /f");
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override /v ImmersiveSearchFull /t REG_DWORD /d 00000001 /f");
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override /v CenterScreenRoundedCornerRadius /t REG_DWORD /d 00000009 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11110:
						//dis immersive search
						system("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Search /v ImmersiveSearch /f");
						system("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override /v ImmersiveSearchFull /f");
						system("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override /v CenterScreenRoundedCornerRadius /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					//taskbar tasparency
					case 11121:
						system("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced /v UseOLEDTaskbarTransparency /t REG_DWORD /d 00000001 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11120:
						system("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced /v UseOLEDTaskbarTransparency /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					//apps use light theme
					case 11131:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize /v AppsUseLightTheme /t REG_DWORD /d 00000001 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11130:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize /v AppsUseLightTheme /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					//Enable Windows Trasparency
					case 11141:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize /v EnableTransparency /t REG_DWORD /d 00000001 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11140:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize /v EnableTransparency /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					//System use Light Theme
					case 11151:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize /v SystemUsesLightTheme /t REG_DWORD /d 00000001 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11150:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize /v SystemUsesLightTheme /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					//Show Cortana Button
					case 11161:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced /v ShowCortanaButton /t REG_DWORD /d 00000001 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11160:
						system("reg add HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced /v ShowCortanaButton /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					//Show Fluent volume
					case 11171:
						system("reg add \"HKLM\\Software\\Microsoft\\Windows NT\\CurrentVersion\\MTCUVC\" /f");// fixato errore con lo spazio Windows NT, quindi mettere la path tra \"
						system("reg add \"HKLM\\Software\\Microsoft\\Windows NT\\CurrentVersion\\MTCUVC\" /v EnableMtcUvc /t REG_DWORD /d 00000001 /f");
					break;
					
					case 11170:
						system("reg add \"HKLM\\Software\\Microsoft\\Windows NT\\CurrentVersion\\MTCUVC\" /f");
						system("reg add \"HKLM\\Software\\Microsoft\\Windows NT\\CurrentVersion\\MTCUVC\" /v EnableMtcUvc /t REG_DWORD /d 00000000 /f");
					break;
					
					//Show ethenet fluent
					case 11181:
						system("reg add \"HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Settings\\Network\" /v ReplaceVan /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11180:
						system("reg add \"HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Settings\\Network\" /v ReplaceVan /t REG_DWORD /d 00000002 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					//Show battery fluent
					case 11191:
						system("reg add HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell /v UseWin32BatteryFlyout /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11190:
						system("reg add HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell /v UseWin32BatteryFlyout /t REG_DWORD /d 00000001 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					
					//Build on Desktop
					case 11211:
						system("reg add \"HKCU\\Control Panel\\Desktop\"  /v PaintDesktopVersion /t REG_DWORD /d 00000001 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					case 11210:
						system("reg add \"HKCU\\Control Panel\\Desktop\" /v PaintDesktopVersion /t REG_DWORD /d 00000000 /f");
						system("taskkill /F /IM explorer.exe & start explorer");
					break;
					
					//New Start
					case 11221:
						system("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\Overrides\\0\\2093230218  /v EnabledState /t REG_DWORD /d 00000002 /f");
						system("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\Overrides\\0\\2093230218  /v EnabledStateOptions /t REG_DWORD /d 00000000 /f");
						printf("The system will reboot\n");
						system("pause");
						system("shutdown /r");
					break;
					
					case 11220:
						system("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\Overrides\\0 /f");
						printf("The system will reboot\n");
						system("pause");
						system("shutdown /r");
					break;


					//Add new item in "new" context menu
					case 11231: {
                        char extension[10];//estensione del file
                        printf("Insert the file type extension to add in -New- menu: ");
                        scanf("%10s", &extension);
                        char ext_reale[strlen(extension)];
                        sprintf(ext_reale, "%s", extension);//mette nel nome reale l'input

                        char nome_input[100];//nome del item che appare nel menu nuovo
                        printf("Insert the text to show in -New- menu: ");
                        scanf("%100s", &nome_input);
                        char txt_reale[strlen(nome_input)];
                        sprintf(txt_reale, "%s", nome_input);//mette nel nome reale l'input

                        char command[60];//comando

                        sprintf(command, "reg add HKCR\\.%s  /ve /t REG_SZ /d %s /f", ext_reale, ext_reale);
                        system(command);

                        sprintf(command, "reg add HKCR\\.%s\\ShellNew  /v FileName /t REG_SZ /f", ext_reale);
                        system(command);

                        sprintf(command, "reg add HKCR\\%s  /ve /t REG_SZ /d %s /f",ext_reale,txt_reale);//nome context menu
                        system(command);

                        system("taskkill /F /IM explorer.exe & start explorer");//riavvia explorer.exe
                        break;
                    }
                    case 11230: {
                        char extension_del[10];//estensione del file
                        printf("Insert the file type extension to remove in -New- menu: ");
                        scanf("%10s", &extension_del);
                        char ext_reale_del[strlen(extension_del)];
                        sprintf(ext_reale_del, "%s", extension_del);//mette nel nome reale l'input

                        char command_del[60];//comando

                        sprintf(command_del, "reg delete HKCR\\.%s  /ve /f", ext_reale_del);
                        system(command_del);

                        sprintf(command_del, "reg delete HKCR\\.%s\\ShellNew  /v FileName /f", ext_reale_del);
                        system(command_del);

                        sprintf(command_del, "reg delete HKCR\\%s  /ve /f", ext_reale_del);//nome context menu
                        system(command_del);

                        system("taskkill /F /IM explorer.exe & start explorer");//riavvia explorer.exe
                        break;
                    }
                    
                    //Set type of file to get preview as txt, in explorer preview pane
					case 11241: {
                    	char input[15]= {NULL};
						char comm[120]={NULL};
						printf("Insert the file type extension to add(including dot): ");
						scanf("%s", input);
						
						sprintf(comm, "reg add HKCR\\%s /v \"Content Type\" /t REG_SZ /d text/plain /f",input);
						system(comm);
						
						sprintf(comm, "reg add HKCR\\%s /v PerceivedType /t REG_SZ /d text /f",input);
						system(comm);
						
						break;
					}
					case 11240: {
                    	char input[15]= {NULL};
						char comm[120]={NULL};
						printf("Insert the file type extension to remove(including dot): ");
						scanf("%s", input);
						
						sprintf(comm, "reg delete HKCR\\%s /v \"Content Type\" /f",input);
						system(comm);
						
						sprintf(comm, "reg delete HKCR\\%s /v PerceivedType /f",input);
						system(comm);
						
						break;
					}
                    	
				}
				
			break;
			
			case 2://guida
			printf("With this software you can edit system design and properties, than otherwise you cannot change.\n");
			printf("At main menu enter 1, then type one of these code to start.\n\n");
			printf("Last digit of each code (NOT to be put among brackets) if it\'s 1 enable else if it\'s 0 disable:\n\n");
			printf("Immersive floating search 1111(1)\nIncrease Taskbar Transparency Level 1112(1)\nApps use Light Theme 1113(1)\nEnable Windows Trasparency 1114(1)\n");
			printf("System use Light Theme 1115(1)\nShow Cortana Button 1116(1)\nShow volume control Fluent Design 1117(1)\nShow ethernet control Fluent Design 1118(1)\nShow battery control Fluent Design 1119(1)\n");
			printf("Display Windows version on Desktop 1121(1)\nNew Start Design 1122(1)\nAdd new Item in -New- ContextMenu 1123(1)\nSet type of file to get preview as txt, in explorer preview pane 1124(1)\n\n");
			system("pause");
			break;
				
		}
		system("cls");
	}while(menu<=2);
	return 0;
}
