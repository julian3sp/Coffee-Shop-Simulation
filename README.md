# Coffee-Shop-Simulation

## Overview
The Gompei Coffee Shop Simulation is a program that models customer behavior and queue management at a coffee shop with multiple checkout queues. It simulates customer arrivals, orders, and queue handling based on given probabilities.

## Usage
To run the simulation, use the following command-line format:

```sh
./run_simulation <seed> <total_min> <arrival_prob> <order_prob> <num_queues> <outputFile>
```

### Command-Line Arguments:
1. `<seed>`: Integer seed value for random number generation.
2. `<total_min>`: Total minutes for which the simulation will run.
3. `<arrival_prob>`: Probability of a customer arriving at any given time unit.
4. `<order_prob>`: Probability of a customer placing an order.
5. `<num_queues>`: Number of checkout queues available in the coffee shop.
6. `<outputFile>`: Filename for saving the simulation results.

## Features
- Simulates customer arrivals based on a probabilistic model.
- Uses multiple checkout queues for serving customers efficiently.
- Tracks customer wait times and order processing times.
- Outputs simulation results, including served customers and remaining customers in queues.
- Saves detailed results to an output file.

## Simulation Flow
1. The program initializes using the provided command-line parameters.
2. It prints the number of checkout queues and begins the simulation.
3. At each time step:
   - A new customer may arrive based on the arrival probability.
   - The shortest queue is identified for customer placement.
   - Customers in queues are processed based on the order probability.
   - Served customers' details are recorded.
4. The simulation runs for the specified duration (`total_min`).
5. After completion, the results are displayed and saved to the output file.

## Output
- Console Output:
  - New customer arrivals.
  - Customer service details (arrival, start, and completion times).
  - Summary of remaining customers in each queue.
  - Number of customers served by each cashier.

- Output File Format:
  | ID | Arrive | Start | Leave |
  |----|--------|-------|-------|
  | X  | Y      | Z     | W     |
  (where `X` is the customer ID, `Y` is arrival time, `Z` is service start time, and `W` is completion time)

## Future Improvements
- Implement different queue management strategies (e.g., priority queues).
- Add customer priority levels for VIP or express service.
- Enhance reporting with average wait times and service efficiency metrics.
- Implement a graphical representation of queue movements.

## Dependencies
- Standard C++ libraries (`iostream`, `vector`, `queue`, `fstream`)
- Custom headers: `customer.h`, `shopQueue.h`


