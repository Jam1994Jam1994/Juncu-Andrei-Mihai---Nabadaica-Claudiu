#include "stdafx.h"
#include "pch.h"
#pragma once
#include "Auto.h"
#include <vector>

using namespace System;
using namespace System::Collections::Generic;

ref class ParcAuto
{
public:
    List<Auto^>^ autoList;

public:
    ParcAuto();
    void AdaugareAuto(String^ marca, String^ model, String^ an);
    void EliminareAuto(String^ marca, String^ model, String^ an);
    List<Auto^>^ GetAuto();
};