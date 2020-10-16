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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0xd93c1102, "_snd_pcm_stream_lock_irqsave" },
	{ 0x56a78f1, "dev_printk" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x8b801dbe, "em28xx_register_extension" },
	{ 0xeea0399, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x32e5f408, "snd_pcm_hw_constraint_integer" },
	{ 0x72241f56, "snd_card_disconnect" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe4050cc6, "em28xx_read_ac97" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x955b29fb, "em28xx_write_ac97" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0x3de2461c, "em28xx_unregister_extension" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb469fa85, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0xf412120a, "usb_free_coherent" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5a1d4aee, "snd_ctl_boolean_mono_info" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd6fc557c, "snd_pcm_hw_constraint_minmax" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb08828fb, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0xc28c6b00, "usb_alloc_coherent" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x14129d88, "em28xx_audio_analog_set" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "em28xx,snd-pcm,snd");


MODULE_INFO(srcversion, "ABBA7DD885BD710168AE39A");
