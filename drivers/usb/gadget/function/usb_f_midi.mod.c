#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe1d9cb60, "usb_gstrings_attach" },
	{ 0x4e412961, "usb_free_all_descriptors" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9232c06c, "usb_ep_set_halt" },
	{ 0xf6953456, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6dc7e70, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd666b295, "snd_rawmidi_new" },
	{ 0x988a694f, "snd_device_new" },
	{ 0x7592e5b, "usb_put_function_instance" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaea4b69b, "usb_ep_autoconfig" },
	{ 0x1d7e3cd, "snd_card_free_when_closed" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc847167e, "config_group_init_type_name" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x38aa9a6c, "usb_function_register" },
	{ 0x49f26466, "kstrndup" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x2e406729, "snd_component_add" },
	{ 0xb39882ca, "alloc_ep_req" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x6e85a6d6, "snd_rawmidi_drop_output" },
	{ 0xc4bd6698, "usb_interface_id" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x94d20e1b, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x76063b93, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "libcomposite,udc-core,snd-rawmidi,snd");


MODULE_INFO(srcversion, "75F3075C61CF7D6409D7E35");
