#ifndef S_MENU_
#define S_MENU_

#include "Scontrol.h"
#include <vector>
#include <string>

class Smenu : public Scontrol {
public:
    Smenu(int w = 0, int h = 0, Scolor bc = WHITE, Swindow* win = nullptr, Sgrid* g = nullptr)
        : Scontrol(w, h, bc, win, g) {}

    // Add Menu Item
    void addItem(const std::string& item) {
        items.push_back(item);
    }

    // Get Menu Item
    const std::vector<std::string>& getItems() const {
        return items;
    }

    // Rendering menu
    virtual bool render() override {
        // Example rendering logic
        if (_window) {
            for (const auto& item : items) {
                // Assuming _window has a method for drawing text
                _window->drawText(item);
            }
            return true;
        }
        return false;
    }

private:
    std::vector<std::string> items; // Menu items
};

#endif 
