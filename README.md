# Embedded Systems Simulator

## Build and Run
```bash
make
./EmbeddedSimulator
```

## Available commands

| Commands | Description | 
| gpio_set | Set a GPIO pin HIGH |
gpio_clear | Set a GPIO pin LOW |
| gpio_read | Read the state of a GPIO pin |
| timer_start | Start a timer for a specified duration (ms) |
| uart_send | Send data through UART |
| uart_receive | Simulate receiving UART data |
| exit | Quit the program |

## Example
1. Set GPIO pin 3 to HIGH:
```bash   
Enter command: gpio_set
Enter GPIO pin: 3
GPIO Pin 3 set to HIGH.
```
2. Check GPIO pin 3 state:
```bash   
Enter command: gpio_read
Enter GPIO pin: 3
GPIO Pin 3 is HIGH.
```
3. Start a timer for 2000ms (2 seconds):
```bash   
Enter command: timer_start
Enter timer duration (ms): 2000
Timer started for 2000 ms.
(Waits 2 seconds...)
Timer expired!
```
4. Send data via UART:
```bash
Enter command: uart_send
Enter data to send: Hello, UART!
Sending data via UART: Hello, UART!
```
5. Exit the simulator:
```bash
Enter command: exit
```
