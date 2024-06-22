#include <thread>

// include
#include "sessions.hpp"

// local files
#include "shared.hpp"
#include "graphics.hpp"
#include "internet.hpp"

using namespace std;

void finalize();

int main() {
  thread graphics_thread(graphics_thr);
  thread internet_thread(internet_thr);

  for (auto &thr : threads) {
    thr.join();
  }

  return 0;
}

void finalize() {

}