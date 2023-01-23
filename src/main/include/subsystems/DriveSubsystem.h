// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/Encoder.h>
#include <rev/CANSparkMax.h>
#include <rev/SparkMaxPIDController.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/XboxController.h>
#include <frc/controller/PIDController.h>

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();

  void Drive();

  void Periodic() override;

  void SimulationPeriodic() override;

 private:
  rev::CANSparkMax samSmith{16, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
  
  rev::SparkMaxPIDController samSmithPID{samSmith.GetPIDController()};

  frc::XboxController m_xbox{0};
};
