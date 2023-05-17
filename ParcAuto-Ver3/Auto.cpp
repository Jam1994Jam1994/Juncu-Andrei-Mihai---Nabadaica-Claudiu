#include "stdafx.h"
#include "pch.h"
#include "Auto.h"

using namespace std;
using namespace System;


Auto::Auto(String^ marca, String^ model, String^ an)
{
    this->marca = marca;
    this->model = model;
    this->an = an;
}

String^ Auto::GetMarca()
{
    return marca;
}

String^ Auto::GetModel()
{
    return model;
}

String^ Auto::GetAn()
{
    return an;
}

void Auto::showm() {
 
    Console::WriteLine(marca);

}
