#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");
HWND hcmb, edit1, edit2;
HMENU menu, subMenu;

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_CROSS);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) NULL_BRUSH;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Code::Blocks Template Windows App"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           320,                 /* The programs width */
           240,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
        case WM_CREATE:
            hcmb = CreateWindow("EDITBOX",
                         "EDITBOX",
                         WS_CHILD | WS_VISIBLE ,
                         10, 10, 200, 500,
                         hwnd, NULL, NULL, NULL);
//            SendMessage(hcmb, CB_ADDSTRING, 0, (LPARAM)"T1");
//            SendMessage(hcmb, CB_ADDSTRING, 0, (LPARAM)"T2");
//            SendMessage(hcmb, CB_ADDSTRING, 0, (LPARAM)"T3");
            ShowWindow( hwnd, SW_SHOW );
            CreateWindow("BUTTON",
            "BUTTON",
            WS_CHILD | WS_VISIBLE | WS_BORDER,
            210, 10, 60, 20,
            hwnd, (HMENU)2, NULL, NULL);
            menu = CreateMenu();
            subMenu = CreateMenu();
            AppendMenu(menu, MF_STRING | MF_POPUP, (UINT)subMenu, "App");
            AppendMenu(subMenu, MF_STRING , 3, "Exit");
            AppendMenu(subMenu, MF_STRING , 4, "BckdoorExit");
            SetMenu(hwnd, menu);
            break;
        case WM_COMMAND:
            switch(LOWORD(wParam)){
                case 2:
                    ::MessageBox(hwnd,"Hello World!!!","Greetings!", MB_OK);
                    break;
                case 3:
                    exit(0);
                    break;
                case 4:
                    exit(0);
                    break;
            }

            break;
        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

