#ifndef CONTENT_H
#define CONTENT_H

#include <string>
#include <vector>

class Text {
private:
    std::string title;
    std::string origin_text;
public:
    Text(std::string, std::string);
    std::string get_title();
    void set_title(std::string);
    std::string get_origin_text();
    void set_origin_text(std::string);
};

class Image {
//TODO:
};

#endif