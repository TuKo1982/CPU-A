//
//  CPU-A
//
//  (c) 2024-2025 TDolphin
//

#pragma once

#include "AOS/Cybergraphics/CybergraphicsBaseScope.hpp"
#include "AOS/Graphics/GraphicsBaseScope.hpp"
#include "AOS/Identify/IdentifyBaseScope.hpp"
#include "AOS/OpenURL/OpenURLBaseScope.hpp"
#include "AOS/Picasso96/Picasso96BaseScope.hpp"
#include "Core/Singleton.hpp"
#include "MUI/Core/MuiMasterBaseScope.hpp"

class AppContextCore;

class AppCore
{
    friend class td::Singleton<AppCore>;
    friend class AppContextCore;

    // open libraries, close on destructor
    MuiMasterBaseScope muiBaseScope;
    IdentifyBaseScope identifyBaseScope;
    OpenURLBaseScope openUrlBaseScope;
    Picasso96BaseScope picasso96BaseScope;
    CybergraphicsBaseScope cybergraphicsBaseScope;
    GraphicsBaseScope graphicsBaseScope;

    AppCore();

  public:
    void Run();
};

/// @brief main Application (singleton) object
typedef class td::Singleton<AppCore> App;
