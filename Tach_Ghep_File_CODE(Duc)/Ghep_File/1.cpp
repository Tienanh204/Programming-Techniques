#include <fstream>
#include <string>
using namespace std;
void merge_files(const std::string& output_file, int num_parts)
{
    std::ofstream out(output_file, std::ios::binary);
    for (int i = 0; i < num_parts; i++)
    {
        std::ifstream in(output_file + "." + std::to_string(i), std::ios::binary);
        char buffer[1024];
        while (in.read(buffer, 1024))
            out.write(buffer, 1024);
    }
}
int main() {
    merge_files("Ghep.txt", 10);
    return 0;
}