#pragma once

#ifdef ASP_PLATFORM_WINDOWS

extern Aspen::Application* Aspen::CreateApplication();

int main(int argc, char** argv) {

	//printf("Aspen Engine Running");
	auto app = Aspen::CreateApplication();
	app->Run();
	delete app;

}

#endif
