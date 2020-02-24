#include "cl_application.h"

cl_application::cl_application()
{
	set_object_name("root");

	set_state(1);
}



void cl_application::bild_tree_objects()
{

	p_ob_1 = new cl_1();
	p_ob_1->set_object_name("ob_1");
	p_ob_1->set_parent(this);

	p_ob_2 = new cl_2();
	p_ob_2->set_object_name("ob_2");
	p_ob_2->set_parent(p_ob_1);

	p_ob_3 = new cl_3();
	p_ob_3->set_object_name("ob_3");
	p_ob_3->set_parent(p_ob_2);

	p_ob_4 = new cl_4();
	p_ob_4->set_object_name("ob_4");
	p_ob_4->set_parent(p_ob_2);

	p_ob_2 = new cl_2();
	p_ob_2->set_object_name("ob_5");
	p_ob_2->set_parent(p_ob_1);

	p_ob_1 = new cl_1();
	p_ob_1->set_object_name("ob_6");
	p_ob_1->set_parent(this);

	p_ob_4 = new cl_4();
	p_ob_4->set_object_name("ob_7");
	p_ob_4->set_parent(this);

	p_ob_1 = new cl_1();
	p_ob_1->set_object_name("ob_8");
	p_ob_1->set_parent(p_ob_4);

	last_obj_name = p_ob_1->get_object_name();
}

int cl_application::exec_app()
{
	//show_object_name();
	show_tree((cl_base*)this, 0, last_obj_name);
	cout << endl;
	string input;
	cin >> input;
	p_ob_2->show_object(input);

	return 0;
}
