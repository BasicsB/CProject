// Calculator.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "Calculator.h"
#define NONE 0
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4

HWND g_hDlg;

// #define: 상수 치환 (내가 알아보기 쉬운 단어로 치환)
// ADD를 쓰면 1로 인식

// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    // 플래그: 어떤 연산기호가 눌린 상태냐, 연산기호가 이전에 눌렸었냐(숫자 새로쓰기 여부)
    // static: 함수가 끝나도 공간이 삭제되지 않는 정적변수 (유사 전역변수)
    static int oper;        // 0은 안눌림, 1 더하기, 2 빼기, 3 곱하기, 4 나누기
    static int reset_flag;      // 0 안눌림, 1은 연산기호 눌림
    static int first_num;       // 연산기호가 눌렸을때 기존의 값을 백업할 변수
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;
    case WM_COMMAND:
        int key = LOWORD(wParam);
        if (key == IDCANCEL)
        {
            // 취소 버튼을 누르면 동작할 코드
            EndDialog(hDlg, key);
            return (INT_PTR)TRUE;
        }
        else if (key == IDOK) {
            // 확인 버튼을 누르면 동작할 코드
            if (oper == ADD) {
                // 화면에 있는 값을 변수로 저장해서 -> 백업한 값과 더하기 하고 -> 화면에 보여준다.
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, first_num + num, TRUE);
            }
            else if (oper == SUB) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, first_num - num, TRUE);
            }
            else if (oper == MUL) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, first_num * num, TRUE);
            }
            else if (oper == DIV) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                if (num != 0) {
                   SetDlgItemInt(hDlg, IDC_EDIT1, first_num / num, TRUE);
                }
                else {
                    SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                }
            }
            oper = NONE;
            reset_flag = 1;     // = 버튼 누르면 값을 새로 쓰겠다.
        }
        else if (key == IDC_BUTTON0) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 0, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON1) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 1, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 1, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON2) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 2, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 2, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON3) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 3, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 3, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON4) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 4, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 4, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON5) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 5, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 5, TRUE);
                reset_flag = 0;
            }
        } 
        else if (key == IDC_BUTTON6) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 6, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 6, TRUE);
                reset_flag = 0;
            }
        } 
        else if (key == IDC_BUTTON7) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 7, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 7, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_BUTTON8) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 8, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 8, TRUE);
                reset_flag = 0;
            }
        } 
        else if (key == IDC_BUTTON9) {
            if (reset_flag == 0) {
                int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
                SetDlgItemInt(hDlg, IDC_EDIT1, num * 10 + 9, TRUE);
            }
            else {
                SetDlgItemInt(hDlg, IDC_EDIT1, 9, TRUE);
                reset_flag = 0;
            }
        }
        else if (key == IDC_CLEAR) {
            reset_flag = 0;
            oper = NONE;
            first_num = 0;
            SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
        }
        else if (key == IDC_BACK) {
            int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            SetDlgItemInt(hDlg, IDC_EDIT1, num / 10, TRUE);
        }
        else if (key == IDC_ADD) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = ADD;     // 1
        }
        else if (key == IDC_SUB) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = SUB;
        } 
        else if (key == IDC_MUL) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = MUL;
        } 
        else if (key == IDC_DIV) {
            first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
            reset_flag = 1;
            oper = DIV;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
   
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), 0, DlgProc);
    return 0;
}