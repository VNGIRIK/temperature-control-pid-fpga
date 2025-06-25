![PID schematic](https://github.com/user-attachments/assets/2f4aa96f-7755-4964-ba28-64d042d91d06)

# Temperature Control System using PID and FPGA

This repository contains all codes, models, and documentation for my ongoing internship project on designing a temperature control system using PID control implemented via FPGA and microcontroller components.

##  Project Structure
- **simulink-models/**: MATLAB Simulink PID models and system design.
- **arduino-code/**: Arduino scripts for sensor reading and actuator control.
- **fpga-vivado/**: HDL files and Vivado project for implementing PID on FPGA.
- **test-circuits/**: Amplifier and sensor test circuits, simulations, and schematics.
- **data-logs/**: Experiment logs, sensor readings, and response graphs.
- **docs/**: Design notes and final report drafts.

##  Technologies Used
- MATLAB/Simulink
- Vivado (FPGA Design)
- VHDL / Verilog
- Arduino IDE
- LM35 / thermistor sensors
- Operational Amplifiers

## How to Run
1. Open `pid_model.slx` in MATLAB Simulink and run the simulation.
2. Upload `temperature_reader.ino` to Arduino for sensor data.
3. Synthesize and deploy `pid_controller.vhdl` to FPGA using Vivado.

## Project Goals
- Closed-loop temperature control using PID
- Real-time sensor feedback to microcontroller or FPGA
- Integration with Simulink for model testing
![Circuit diagram Arduino](https://github.com/user-attachments/assets/7aa8e846-da35-4e9b-b147-cd7cfc5f0a8e)

## Author
**Haobijam Vivekanandagiri** – Internship Project at 
  Center of Lasers and Photonics, Indian Institute of Technology, Kanpur 
