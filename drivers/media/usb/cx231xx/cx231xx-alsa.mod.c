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
	{ 0x2d3385d3, "system_wq" },
	{ 0xfdbae42a, "is_fw_load" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0xf954570, "v4l2_subdev_call_wrappers" },
	{ 0xd93c1102, "_snd_pcm_stream_lock_irqsave" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0xde8d355a, "usb_unlink_urb" },
	{ 0x32e5f408, "snd_pcm_hw_constraint_integer" },
	{ 0x5c6d9542, "cx231xx_register_extension" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb469fa85, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xdae20142, "cx231xx_capture_start" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd3f45e33, "cx231xx_set_alt_setting" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x2c161dc3, "cx231xx_unregister_extension" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,videodev,snd");


MODULE_INFO(srcversion, "ED0AACD08CFFA33FE7D6CEC");
