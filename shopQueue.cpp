/*
 * Shop_queue.cpp
 * ------------------------------------------
 * Copyright (c) 2024
 * Yu-Shan Sun
 * CS 2303 (Spring 2024 C-Term)
 * Worcester Polytechnic Institute - CS
 * ------------------------------------------
 */

#include "shopQueue.h"
#include <iostream>
using namespace std;


ShopQueue::ShopQueue() {
  front = nullptr;
  back = nullptr;
  length = 0;
  customersServed = 0;
  serveTime = 0;
}

void ShopQueue::addNewCustomer(int time, int timeNeeded, int completedTime, int ID) {
 
  // Create new customer node
  shared_ptr<Customer> newCust = make_shared<Customer>(Customer{time, timeNeeded, completedTime, ID});
  
  shared_ptr<Node> newNode = make_shared<Node>(Node{newCust,  nullptr});

  // Case 1: Queue is empty
  if (isEmpty()) {
    front = newNode;
    back = newNode;
    cout << "empt" << endl;
  }
  // Case 2: Queue is not empty
  else {
    back->next = newNode;
    back = newNode;
  }

  length++;
}

int ShopQueue::getLength() {
  return length;
}

bool ShopQueue::isEmpty() {
  return length == 0;
}

shared_ptr<Customer> ShopQueue::peekFrontCustomer() {
  if (front == nullptr){
    return nullptr;
  }
  return front->data;
}

shared_ptr<Customer> ShopQueue::removeFrontCustomer() {
  // Case 1: Queue is empty
  if (length == 0){
    return nullptr;
  }
  else{
    shared_ptr<Customer> data = front->data;

    // Case 2a: Last element in queue
    if (length == 1) {
      front = nullptr;
      back = nullptr;
    }
    // Case 2b: More than 1 element
    else {
      front = front->next;
    }

    length--;
    ++customersServed;

    return data;
  }
 
}

int ShopQueue::getCustomersServed() {
  return customersServed;
}

void ShopQueue::setServeTime(int x){
serveTime = x;
}

int ShopQueue::getServeTime(){
return serveTime;
}


int ShopQueue::numItems(){
  return length;
}



