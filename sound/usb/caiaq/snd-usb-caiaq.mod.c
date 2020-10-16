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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9a152689, "param_ops_int" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0x8724cab2, "usb_init_urb" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xf6953456, "snd_rawmidi_set_ops" },
	{ 0x72241f56, "snd_card_disconnect" },
	{ 0xd666b295, "snd_rawmidi_new" },
	{ 0x297acc01, "input_set_abs_params" },
	{ 0x38ea3b28, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x4be0fc9e, "param_ops_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe3ea52a2, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x6b60a022, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xed91b2e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8b77fdf2, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa39be2e7, "usb_urb_ep_type_check" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0x4f990c81, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0x7b0629e7, "input_register_device" },
	{ 0xf9a45858, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0x2de4f87b, "input_free_device" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc0e66c25, "input_unregister_device" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99f14dec, "snd_pcm_limit_hw_rates" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x495a4451, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0x94d20e1b, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x76063b93, "snd_rawmidi_receive" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0xea1c9521, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F759D6A3FBC8A3314E7EB77");
