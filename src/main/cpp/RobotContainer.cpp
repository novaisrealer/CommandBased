// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"
#include <frc2/command/RunCommand.h>

RobotContainer::RobotContainer(){
  // Initialize all of your commands and subsystems here
  m_drive.SetDefaultCommand( frc2::RunCommand( [this] { m_drive.Drive(); }, {&m_drive}) );
  
  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
}

