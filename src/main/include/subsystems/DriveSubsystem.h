// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <rev/SparkMaxPIDController.h>>
#include <rev/CANSparkMax.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/XboxController.h>

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();

  void Periodic() override;

  void SimulationPeriodic() override;

 private:
  rev::CANSparkMax motor1{1, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
  
  rev::SparkMaxPIDController motor1PID{motor1.GetPIDController()};
  
};
