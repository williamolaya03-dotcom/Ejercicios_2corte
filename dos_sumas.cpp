#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapa; // valor -> índice

        for (int i = 0; i < nums.size(); i++) {
            int complemento = target - nums[i];
            if (mapa.find(complemento) != mapa.end()) {
                return {mapa[complemento], i};
            }
            mapa[nums[i]] = i;
        }
        return {}; // nunca debería llegar aquí
    }
};

int main() {
    Solution sol;
    int n, target;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Ingrese los numeros separados por espacio: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Ingrese el valor objetivo (target): ";
    cin >> target;

    vector<int> resultado = sol.twoSum(nums, target);

    if (!resultado.empty()) {
        cout << "Indices encontrados: [" << resultado[0] << ", " << resultado[1] << "]" << endl;
    } else {
        cout << "No se encontro solucion." << endl;
    }

    return 0;
}
