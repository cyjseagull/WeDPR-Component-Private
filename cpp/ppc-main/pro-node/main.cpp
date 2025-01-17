/**
 *  Copyright (C) 2022 WeDPR.
 *  SPDX-License-Identifier: Apache-2.0
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 * @file main.cpp
 * @author: yujiechen
 * @date 2022-11-25
 */
#include "ProNodeServiceApp.h"
#include "libhelper/CommandHelper.h"

using namespace ppctars;

int main(int argc, char* argv[])
{
    try
    {
        ppc::initAppCommandLine(argc, argv);
        ProNodeServiceApp app;
        app.main(argc, argv);
        app.waitForShutdown();
        return 0;
    }
    catch (std::exception& e)
    {
        cerr << "ppc-pro-node std::exception:" << boost::diagnostic_information(e) << std::endl;
    }
    catch (...)
    {
        cerr << "ppc-pro-node unknown exception." << std::endl;
    }
    return -1;
}
