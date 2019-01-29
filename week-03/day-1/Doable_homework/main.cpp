#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(int argc, char* args[]) {

    std::map<std::string, std::string> tree1;
    std::map<std::string, std::string> tree2;
    std::map<std::string, std::string> tree3;
    std::map<std::string, std::string> tree4;
    std::map<std::string, std::string> tree5;

    tree1.insert(std::make_pair("type", "Paper Birch"));
    tree1.insert(std::make_pair("leaf color", "dark green"));
    tree1.insert(std::make_pair("age", "40"));
    tree1.insert(std::make_pair("sex", "male"));

    tree2.insert(std::make_pair("type", "Basswood"));
    tree2.insert(std::make_pair("leaf color", "green"));
    tree2.insert(std::make_pair("age", "6"));
    tree2.insert(std::make_pair("sex", "female"));

    tree3.insert(std::make_pair("type", "Silver Maple"));
    tree3.insert(std::make_pair("leaf color", "pale green"));
    tree3.insert(std::make_pair("age", "8"));
    tree3.insert(std::make_pair("sex", "male"));

    tree4.insert(std::make_pair("type", "Red Spruce"));
    tree4.insert(std::make_pair("leaf color", "yellowish green"));
    tree4.insert(std::make_pair("age", "10"));
    tree4.insert(std::make_pair("sex", "female"));

    tree5.insert(std::make_pair("type", "Sycamore"));
    tree5.insert(std::make_pair("leaf color", "bright green"));
    tree5.insert(std::make_pair("age", "38"));
    tree5.insert(std::make_pair("sex", "male"));

    return 0;
}