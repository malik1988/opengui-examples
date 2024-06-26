#include <iostream>
#include <elements.hpp>
#include <infra/support.hpp>

using namespace cycfi::elements;

auto constexpr bkd_color = rgba(35, 35, 37, 255);
auto background = box(bkd_color);

auto make_frame() {
    using namespace cycfi::elements;
    return vgrid(
        htile(label("toolbar"),
                limit({{30, 80}, {50, 100}}, button("open", 10)),
                limit({{30, 80}, {50, 100}}, toggle_button("select", 10)),
                vstretch(0.5, button("stretch"))
        ),
        htile(label("content")),
        htile(label("status"))
    );
}

int main(int argc, char* argv[])
{
    app _app("Elements first");
    window _win(_app.name());
    _win.on_close = [&_app]() { _app.stop(); };

    view view_(_win);

    view_.content(
       make_frame(),
       background
    );

    _app.run();
    return 0;
}
