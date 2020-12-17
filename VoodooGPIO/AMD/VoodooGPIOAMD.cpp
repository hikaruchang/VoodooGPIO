//
//  VoodooGPIOAMD.cpp
//  VoodooGPIO
//
//  Created by Hikaru Chang on 17/12/20.
//  Copyright © 2020 Hikaru Chang. All rights reserved.
//

#include "VoodooGPIOAMD.hpp"

OSDefineMetaClassAndStructors(VoodooGPIOAMD, VoodooGPIO);

bool VoodooGPIOAMD::start(IOService *provider) {
    this->pins = kerncz_pins;
    this->npins = ARRAY_SIZE(kerncz_pins);
    this->groups = kerncz_groups;
    this->ngroups = ARRAY_SIZE(kerncz_groups);
    this->functions = kerncz_functions;
    this->nfunctions = ARRAY_SIZE(kerncz_functions);

    IOLog("%s::Loading GPIO Data for AMD\n", getName());

    return VoodooGPIO::start(provider);
}
