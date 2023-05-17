#include "stdafx.h"
#include "pch.h"
#pragma once

using namespace System;

ref class Auto
{
public:
    Auto(String^ marca, String^ model, String^ an);
    String^ GetMarca();
    String^ GetModel();
    String^ GetAn();
    void showm();

public:
    String^ marca;
    String^ model;
    String^ an;
};