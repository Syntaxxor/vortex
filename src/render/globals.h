#ifndef RENDER_GLOBALS_H
#define RENDER_GLOBALS_H

#define VK_NO_PROTOTYPES
#include <vulkan/vulkan.h>
typedef struct SDL_Window SDL_Window;

extern SDL_Window *VE_G_Window;
extern VkInstance VE_G_Instance;
extern VkPhysicalDevice VE_G_PhysicalDevice;
extern VkDevice VE_G_Device;
extern uint32_t VE_G_GraphicsQueueIndex;
extern uint32_t VE_G_PresentQueueIndex;
extern VkQueue VE_G_GraphicsQueue;
extern VkQueue VE_G_PresentQueue;
extern VkSurfaceKHR VE_G_Surface;
extern VkSwapchainKHR VE_G_Swapchain;
extern uint32_t VE_G_SwapchainImageCount;
extern VkImage *VE_G_pSwapchainImages;
extern VkImageView *VE_G_pSwapchainImageViews;
#ifndef NDEBUG
extern VkDebugReportCallbackEXT VE_G_DebugCallback;
#endif // NDEBUG

#endif // RENDER_GLOBALS_H