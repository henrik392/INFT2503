#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::Box box;
  Gtk::Entry entryFirstName;
  Gtk::Entry entryLastName;
  Gtk::Button button;
  Gtk::Label label;
  Gtk::Label labelFirstName;
  Gtk::Label labelLastName;

  Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL),
             labelFirstName("First Name: "),
             labelLastName("Last Name: ") {
    set_title("Øving 4");
    button.set_label("Combine Names");

    box.pack_start(labelFirstName);
    box.pack_start(entryFirstName); // Add the widget entry to box
    box.pack_start(labelLastName);
    box.pack_start(entryLastName); // Add the widget entry to box
    box.pack_start(button);        // Add the widget button to box
    box.pack_start(label);         // Add the widget label to box

    add(box);   // Add vbox to window
    show_all(); // Show all widgets

    entryFirstName.signal_changed().connect([this]() {
      on_entry_changed();
    });

    entryLastName.signal_changed().connect([this]() {
      on_entry_changed();
    });

    button.signal_clicked().connect([this]() {
      label.set_text("Full name: " + entryFirstName.get_text() + " " + entryLastName.get_text());
    });
  }

  void on_entry_changed() {
    bool activate = !entryFirstName.get_text().empty() && !entryLastName.get_text().empty();
    button.set_sensitive(activate);
  }
};

int main() {
  auto app = Gtk::Application::create();
  Window window;
  return app->run(window);
}
