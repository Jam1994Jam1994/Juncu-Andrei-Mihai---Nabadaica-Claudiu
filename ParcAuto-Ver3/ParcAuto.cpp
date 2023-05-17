#include "stdafx.h"
#include "pch.h"
#include "ParcAuto.h"
#include <iostream>


using namespace System;
using namespace std;
using namespace System::Collections::Generic;





    ParcAuto::ParcAuto()
    {
        autoList = gcnew List<Auto^>();
    }

    void ParcAuto::AdaugareAuto(String^ marca, String^ model, String^ an)
    {
        //std::cout << "autolist count" << autoList->Count;
        Console::WriteLine("test marca" + marca);
        /*for (int i = 0; i < autoList->Count; i++)
        {
            Auto^ autoCurenta = autoList[i];
            if (autoCurenta->GetMarca() == marca && autoCurenta->GetModel() == model && autoCurenta->GetAn() == an)
            {*/


        Auto^ autoCurenta = gcnew Auto(marca, model, an);
                autoList->Add(autoCurenta);
                /*break;
            }
        }*/

                //std::cout << "autolist count1" << autoList->Count;
                
    }

    void ParcAuto::EliminareAuto(String ^ marca, String ^ model, String^ an)
    {
        for (int i = 0; i < autoList->Count; i++)
        {
            Auto^ autoCurenta = autoList[i];
            if (autoCurenta->GetMarca() == marca && autoCurenta->GetModel() == model && autoCurenta->GetAn() == an)
            {
                autoList->Remove(autoCurenta);
                break;
            }
        }
    }

    List<Auto^>^ ParcAuto::GetAuto()
    {
        return autoList;
    }

    void AdaugareAuto(ParcAuto^ parcAuto)
    {
        std::cout << "Inserati marca automobilului: ";
        //Console::ReadLine();
        String^ marca = gcnew String(Console::ReadLine());
        //Console::WriteLine (marca);

        std::cout << "Inserati modelul automobilului: ";
        String^ model = gcnew String(Console::ReadLine());
        
        //Console::WriteLine (model);

        std::cout << "Inserati anul productiei automobilului: ";
        String^ an = gcnew String(Console::ReadLine());
        //Console::ReadLine();
        //Console::WriteLine (an);

        //Console::WriteLine("test marca"+marca);

        parcAuto->AdaugareAuto(marca, model, an);
        std::cout << "Automobil adaugat cu succes!!" << std::endl;
       
    }

    void EliminareAuto(ParcAuto^ parcAuto)
    {
        std::cout << "Inserare marca automobilului de eliminat: ";
        String^ marca = gcnew String(Console::ReadLine());
        //Console::ReadLine();
        //Console::WriteLine (marca);

        std::cout << "Inserare modelul automobilului de eliminat: ";
        String^ model = gcnew String(Console::ReadLine());
        //Console::ReadLine();
        //Console::WriteLine (model);

        std::cout << "Inserare anul productiei automobilului de eliminat: ";
        String^ an = gcnew String(Console::ReadLine());
        //Console::ReadLine();
        //Console::WriteLine (an);

        parcAuto->EliminareAuto(marca, model, an);
        std::cout << "Automobil sters cu succes!!" << std::endl;
    }

    void AfisareAuto(ParcAuto^ parcAuto)
    {
        List<Auto^>^ autoList = parcAuto->GetAuto();
        //String^ an = autoList[0]->marca;
        //std::cout << "MarcaMEAAA:"<< an;
        //autoList[0]->showm();
        //Console::WriteLine("test an:"+an);
        std::cout << endl;
        std::cout << "Masinile prezente in parc:" << std::endl;
        if (autoList->Count == 0) {
            std::cout << "Nu sunt masini inregistrate:" << std::endl;
        }
        for each (Auto^ autoCurenta in autoList)
        {

            //String^ model = autoCurenta->GetMarca();
            //std::cout << "Marca:", autoCurenta->GetMarca();
            //Console::WriteLine("Marca din functie in var:" + model);
            //Console::WriteLine("Marca din functie fara var:" + autoCurenta->GetMarca());

            Console::WriteLine("Marca:" + autoCurenta->GetMarca());
            //std::cout << "Model: ", autoCurenta->GetModel();
            Console::WriteLine("Model:" + autoCurenta->GetModel());
            //std::cout << "An: ", autoCurenta->GetAn();
            Console::WriteLine("An:" + autoCurenta->GetAn());
            std::cout << std::endl;
            std::cout << std::endl;
        }
    }
    

    int main()
    {
        ParcAuto^ parcAuto = gcnew ParcAuto();

        while (true)
        {
            //system("cls");
            std::cout << "Selecteaza o optiune:" << std::endl;
            std::cout << "1. Adaugare auto" << std::endl;
            std::cout << "2. Eliminare auto" << std::endl;
            std::cout << "3. Vizualizare lista auto" << std::endl;
            std::cout << "4. Exit" << std::endl;

            int Alegere;
            std::cin >> Alegere;

            switch (Alegere)
            {
            case 1:
                AdaugareAuto(parcAuto);
                break;
            case 2:
                EliminareAuto(parcAuto);
                break;
            case 3:
                AfisareAuto(parcAuto);
                break;
            case 4:
                return 0;
            default:
                std::cout << "Alegere invalida" << std::endl;
                break;
            }
        }

        return 0;
    }