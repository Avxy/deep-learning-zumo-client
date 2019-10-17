/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/


#ifndef SCAN_H_
#define SCAN_H_
    
    #include "movement.h"
    #include "Ultra.h"
    #include "FreeRTOS.h"
    #include "task.h"
    #include "stat.h"
    
    typedef struct {
        int x;
        int y;
    } tile;
    
    extern const int tile_size;  // TODO: check
    extern state robot_state;
    
    
    void pre_scan();
    tile scan();
    void measure_distance(double *dist, double *std_deviation, int count);
    
#endif


/* [] END OF FILE */
