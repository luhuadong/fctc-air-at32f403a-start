#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO 4
#define RT_TIMER_THREAD_STACK_SIZE 512
#define RT_DEBUG
#define RT_DEBUG_COLOR

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_MEMHEAP
#define RT_USING_SMALL_MEM
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart1"
#define RT_VER_NUM 0x40003
#define ARCH_ARM
#define RT_USING_CPU_FFS
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M4

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */


/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 80
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 2
#define DFS_FILESYSTEM_TYPES_MAX 2
#define DFS_FD_MAX 16
#define RT_USING_DFS_ELMFAT

/* elm-chan's FatFs, Generic FAT Filesystem Module */

#define RT_DFS_ELM_CODE_PAGE 437
#define RT_DFS_ELM_WORD_ACCESS
#define RT_DFS_ELM_USE_LFN_3
#define RT_DFS_ELM_USE_LFN 3
#define RT_DFS_ELM_MAX_LFN 255
#define RT_DFS_ELM_DRIVES 2
#define RT_DFS_ELM_MAX_SECTOR_SIZE 512
#define RT_DFS_ELM_REENTRANT
#define RT_USING_DFS_DEVFS

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SERIAL
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_I2C
#define RT_USING_I2C_BITOPS
#define RT_USING_PIN
#define RT_USING_ADC
#define RT_USING_SENSOR
#define RT_USING_SENSOR_CMD

/* Using USB */


/* POSIX layer and C standard library */

#define RT_USING_LIBC
#define RT_USING_POSIX

/* Network */

/* Socket abstraction layer */


/* Network interface device */


/* light weight TCP/IP stack */


/* AT commands */

#define RT_USING_AT
#define AT_USING_CLIENT
#define AT_CLIENT_NUM_MAX 1
#define AT_USING_CLI
#define AT_CMD_MAX_LEN 512
#define AT_SW_VERSION_NUM 0x10300

/* VBUS(Virtual Software BUS) */


/* Utilities */


/* RT-Thread online packages */

/* IoT - internet of things */

#define PKG_USING_BC28_MQTT
#define PKG_USING_BC28_AT_CLIENT_DEV_NAME "uart2"
#define PKG_USING_BC28_MQTT_BAUD_RATE_9600
#define PKG_USING_BC28_MQTT_BAUD_RATE 9600
#define PKG_USING_BC28_MQTT_OP_BAND_8
#define PKG_USING_BC28_MQTT_OP_BAND 8
#define PKG_USING_BC28_RESET_PIN 5
#define PKG_USING_BC28_ADC0_PIN -1
#define PKG_USING_BC28_MQTT_PRODUCT_KEY "a1p8Pngb3oY"
#define PKG_USING_BC28_MQTT_DEVICE_NAME "AT32"
#define PKG_USING_BC28_MQTT_DEVICE_SECRET "vZA3yBC95zDtULVVCfKHXokFh6rPg1h9"
#define PKG_USING_BC28_MQTT_KEEP_ALIVE 600
#define PKG_USING_BC28_MQTT_LATEST_VERSION

/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */


/* IoT Cloud */


/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */


/* peripheral libraries and drivers */

#define PKG_USING_SENSORS_DRIVERS
#define PKG_USING_DHTXX
#define PKG_USING_DHTXX_LATEST_VERSION
#define PKG_USING_GP2Y10
#define PKG_USING_GP2Y10_ADC_DEV_NAME "adc1"
#define PKG_USING_GP2Y10_ADC_DEV_CHANNEL 11
#define PKG_USING_GP2Y10_CONVERT_BITS 12
#define PKG_USING_GP2Y10_VOLTAGE_RATIO 11
#define PKG_USING_GP2Y10_SOFT_FILTER
#define PKG_USING_GP2Y10_LATEST_VERSION
#define PKG_USING_SGP30
#define PKG_USING_SGP30_LATEST_VERSION
#define PKG_USING_LITTLED
#define PKG_USING_LITTLED_PERIOD 1000
#define PKG_USING_LITTLED_PULSE 500
#define PKG_USING_LITTLED_BELL_TIME 50000
#define PKG_USING_LITTLED_BEEP_COUNT 3
#define PKG_USING_LITTLED_LATEST_VERSION

/* miscellaneous packages */


/* samples: kernel and components samples */

#define SOC_FAMILY_AT32
#define SOC_SERIES_AT32F403A

/* Hardware Drivers Config */

#define SOC_AT32F403AVGT7

/* Onboard Peripheral Drivers */

#define BSP_USING_SERIAL

/* On-chip Peripheral Drivers */

#define BSP_USING_GPIO
#define BSP_USING_UART
#define BSP_USING_UART1
#define BSP_USING_UART2
#define BSP_USING_I2C1
#define BSP_I2C1_SCL_PIN 24
#define BSP_I2C1_SDA_PIN 25
#define BSP_USING_ADC
#define BSP_USING_ADC1

#endif
