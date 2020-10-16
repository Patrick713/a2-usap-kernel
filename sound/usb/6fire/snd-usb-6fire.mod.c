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
	{ 0xf9a482f9, "msleep" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0x8724cab2, "usb_init_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x99616f74, "snd_pcm_stop_xrun" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf6953456, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x72241f56, "snd_card_disconnect" },
	{ 0xd666b295, "snd_rawmidi_new" },
	{ 0x8bb6e5ab, "_snd_ctl_add_slave" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x27cf2687, "snd_ctl_boolean_stereo_info" },
	{ 0x1d7e3cd, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xed91b2e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x1a8f01de, "usb_poison_urb" },
	{ 0x78c6bf66, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5a1d4aee, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x297da45f, "snd_ctl_make_virtual_master" },
	{ 0x4f990c81, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0xfde8a122, "usb_interrupt_msg" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0x495a4451, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0x94d20e1b, "snd_rawmidi_transmit" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x76063b93, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CB3529736C1EBE5A8B098F3");
