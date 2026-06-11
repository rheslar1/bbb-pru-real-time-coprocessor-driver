# BBB Real-Time PRU Co-Processor Driver Design Package

## Purpose

BeagleBone Black PRU project that runs timing-critical firmware on the 200MHz PRUs and exchanges high-speed sensor or encoder data with Linux through rpmsg.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/bbb-pru-real-time-coprocessor-driver` |
| Primary stack | C++17, C++ Design Patterns, SOLID, BeagleBone Black, PRU, rpmsg, Kernel driver, Real-time control, Encoder input |
| Review proof point | True real-time BBB subsystem control, PRU/Linux messaging, kernel boundary design, and high-speed hardware timing evidence. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
