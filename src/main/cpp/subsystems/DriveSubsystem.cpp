// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"

DriveSubsystem::DriveSubsystem() {
  // Implementation of subsystem constructor goes here.
  samSmithPID.SetP(0.01);
}

void DriveSubsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.

}

void DriveSubsystem::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}

void DriveSubsystem::Drive() {
    samSmithPID.SetReference(m_xbox.GetRightTriggerAxis(), rev::ControlType::kVelocity );
}