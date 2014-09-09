/*
 * 22d.cpp
 *
 *  Created on: Sep 8, 2014
 *      Author: Shyam
 */
#include <iostream>
#include <vector>

int main(int argc, char **argv) {
	int n;
	std::cin >> n;
	std::pair<int, int> event;
//	std::vector<std::pair<int, int> > events;
	std::vector<std::pair<int, std::string> > list;
	int x, y;
	for (int i = 0; i < n; i++) {
		std::cin >> x;
		std::cin >> y;
		if (x > y) {
			std::swap(x, y);
		}
//		event = std::make_pair(x, y);
//		events.push_back(event);
		list.push_back(std::make_pair(x, "start"));
		list.push_back(std::make_pair(y, "end"));
	}
//	std::sort(events.begin(), events.end());
//	for (int i = 0; i < n; ++i) {
//		printf("%d %d\n", events[i].first, events[i].second);
//	}
//	for (int i = 0; i < n; i++) {

//	}
	printf("HELLO\n");
	for (int i = 0; i < 2*n; i++) {
		printf("%d %s\n", list[i].first,list[i].second.c_str());
	}
	std::sort(list.begin(), list.end());
	printf("WOAH\n");
	for (int i = 0; i < 2*n; i++) {
			printf("%d %s\n", list[i].first,list[i].second.c_str());
		}

}
